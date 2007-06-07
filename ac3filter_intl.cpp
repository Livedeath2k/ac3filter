#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "ac3filter_intl.h"
/*
LangCat::LangCat()
{
}

LangCat::LangCat(const char *path)
{
  set_path(path);
}

LangCat::~LangCat()
{
  reset();
}

int
LangCat::set_path(const char *path)
{
  char file[MAX_PATH];
  WIN32_FIND_DATA fd;
  HANDLE fh;
  int count;

  reset();

  if (!path) return 0;
  if (path[0] == 0) return 0;

  count = 0;
  sprintf(file, "%s\\*", path);
  fh = FindFirstFile(file, &fd);
  if (fh != INVALID_HANDLE_VALUE)
    do
    {
      if (GetFileAttributes(fd.cFileName) && FILE_ATTRIBUTE_DIRECTORY)
      {
        if (lang_from_iso(fd.cFileName))
          count++;
      }
    } while (FindNextFile(fh, &fd));

  langs = new char[MAX_LANG * count];
  if (!langs) return 0;
  memset(langs, 0, sizeof(const char *) * count);
}
*/
// Global language code
// Only 2 or 3-character codes allowed
static const int lang_size = 4;
static char lang[lang_size] = "\0";
extern "C" int _nl_msg_cat_cntr;

void set_lang(const char *code, const char *package, const char *path)
{
#ifdef ENABLE_NLS
  if (package)
  {
    if (path)
      bindtextdomain(package, path);
    textdomain(package);
  }

  if (code)
  {
    if (code[0] == 0) // set_lang("") sets to english
    {
      char lang_env[256];
      sprintf(lang_env, "LANGUAGE=en", lang);
      putenv(lang_env);
      ++_nl_msg_cat_cntr;
    }
    else if (lang_from_iso_code(code)) // verify the language code provided
    {
      strncpy(lang, code, lang_size);
      lang[lang_size-1] = 0;
      char lang_env[256];
      sprintf(lang_env, "LANGUAGE=%s", lang);
      putenv(lang_env);
      ++_nl_msg_cat_cntr;
    }
  }
#endif
}

const char *get_lang()
{
  if (lang[0] == 0) { return 0; }
  return lang;
}


int find_iso6392(const char *_code)
{
  char code[3];
  if (_code == 0) return -1;
  if (_code[0] == 0) return -1;
  if (_code[1] == 0) return -1;
  if (_code[2] == 0) return -1;
  if (_code[3] != 0) return -1;
  code[0] = (char) tolower(_code[0]);
  code[1] = (char) tolower(_code[1]);
  code[2] = (char) tolower(_code[2]);

  int i = 0;
  while (iso_langs[i].name)
  {
    if (iso_langs[i].iso6392)
      if (code[0] == iso_langs[i].iso6392[0] && 
          code[1] == iso_langs[i].iso6392[1] &&
          code[2] == iso_langs[i].iso6392[2])
        return i;
    i++;
  }
  return -1;
}

int find_iso6391(const char *_code)
{
  char code[2];
  if (_code == 0) return -1;
  if (_code[0] == 0) return -1;
  if (_code[1] == 0) return -1;
  if (_code[2] != 0) return -1;
  code[0] = (char) tolower(_code[0]);
  code[1] = (char) tolower(_code[1]);

  int i = 0;
  while (iso_langs[i].name)
  {
    if (iso_langs[i].iso6391)
      if (code[0] == iso_langs[i].iso6391[0] && 
          code[1] == iso_langs[i].iso6391[1])
        return i;
    i++;
  }
  return -1;
}

int find_iso_code(const char *_code)
{
  if (_code == 0) return 0;
  if (_code[0] == 0) return 0;
  if (_code[1] == 0) return 0;
  if (_code[2] == 0) return find_iso6391(_code);
  if (_code[3] == 0) return find_iso6392(_code);
  return 0;
}

const char *lang_from_iso6392(const char *_code)
{
  int i = find_iso6392(_code);
  return i == -1? 0: iso_langs[i].name;
}

const char *lang_from_iso6391(const char *_code)
{
  int i = find_iso6391(_code);
  return i == -1? 0: iso_langs[i].name;
}

const char *lang_from_iso_code(const char *_code)
{
  int i = find_iso_code(_code);
  return i == -1? 0: iso_langs[i].name;
}

const iso_lang_s iso_langs[] = 
{
  { "English", "eng", "en" },
  { "Afar", "aar", "aa" },
  { "Abkhazian", "abk", "ab" },
  { "Achinese", "ace", 0 },
  { "Acoli", "ach", 0 },
  { "Adangme", "ada", 0 },
  { "Adyghe", "ady", 0 },
  { "Adygei", "ady", 0 },
  { "Afro-Asiatic (Other)", "afa", 0 },
  { "Afrihili", "afh", 0 },
  { "Afrikaans", "afr", "af" },
  { "Ainu", "ain", 0 },
  { "Akan", "aka", "ak" },
  { "Akkadian", "akk", 0 },
  { "Albanian", "alb", "sq" },
  { "Aleut", "ale", 0 },
  { "Algonquian languages", "alg", 0 },
  { "Southern Altai", "alt", 0 },
  { "Amharic", "amh", "am" },
  { "English, Old (ca.450-1100)", "ang", 0 },
  { "Angika", "anp", 0 },
  { "Apache languages", "apa", 0 },
  { "Arabic", "ara", "ar" },
  { "Official Aramaic (700-300 BCE)", "arc", 0 },
  { "Imperial Aramaic (700-300 BCE)", "arc", 0 },
  { "Aragonese", "arg", "an" },
  { "Armenian", "arm", "hy" },
  { "Mapudungun", "arn", 0 },
  { "Mapuche", "arn", 0 },
  { "Arapaho", "arp", 0 },
  { "Artificial (Other)", "art", 0 },
  { "Arawak", "arw", 0 },
  { "Assamese", "asm", "as" },
  { "Asturian", "ast", 0 },
  { "Bable", "ast", 0 },
  { "Athapascan languages", "ath", 0 },
  { "Australian languages", "aus", 0 },
  { "Avaric", "ava", "av" },
  { "Avestan", "ave", "ae" },
  { "Awadhi", "awa", 0 },
  { "Aymara", "aym", "ay" },
  { "Azerbaijani", "aze", "az" },
  { "Banda languages", "bad", 0 },
  { "Bamileke languages", "bai", 0 },
  { "Bashkir", "bak", "ba" },
  { "Baluchi", "bal", 0 },
  { "Bambara", "bam", "bm" },
  { "Balinese", "ban", 0 },
  { "Basque", "baq", "eu" },
  { "Basa", "bas", 0 },
  { "Baltic (Other)", "bat", 0 },
  { "Beja", "bej", 0 },
  { "Belarusian", "bel", "be" },
  { "Bemba", "bem", 0 },
  { "Bengali", "ben", "bn" },
  { "Berber (Other)", "ber", 0 },
  { "Bhojpuri", "bho", 0 },
  { "Bihari", "bih", "bh" },
  { "Bikol", "bik", 0 },
  { "Bini", "bin", 0 },
  { "Edo", "bin", 0 },
  { "Bislama", "bis", "bi" },
  { "Siksika", "bla", 0 },
  { "Bantu (Other)", "bnt", 0 },
  { "Tibetan", "bod", "bo" },
  { "Bosnian", "bos", "bs" },
  { "Braj", "bra", 0 },
  { "Breton", "bre", "br" },
  { "Batak languages", "btk", 0 },
  { "Buriat", "bua", 0 },
  { "Buginese", "bug", 0 },
  { "Bulgarian", "bul", "bg" },
  { "Burmese", "bur", "my" },
  { "Blin", "byn", 0 },
  { "Bilin", "byn", 0 },
  { "Caddo", "cad", 0 },
  { "Central American Indian (Other)", "cai", 0 },
  { "Galibi Carib", "car", 0 },
  { "Catalan", "cat", "ca" },
  { "Valencian", "cat", "ca" },
  { "Caucasian (Other)", "cau", 0 },
  { "Cebuano", "ceb", 0 },
  { "Celtic (Other)", "cel", 0 },
  { "Czech", "ces", "cs" },
  { "Chamorro", "cha", "ch" },
  { "Chibcha", "chb", 0 },
  { "Chechen", "che", "ce" },
  { "Chagatai", "chg", 0 },
  { "Chinese", "chi", "zh" },
  { "Chuukese", "chk", 0 },
  { "Mari", "chm", 0 },
  { "Chinook jargon", "chn", 0 },
  { "Choctaw", "cho", 0 },
  { "Chipewyan", "chp", 0 },
  { "Cherokee", "chr", 0 },
  { "Church Slavic", "chu", "cu" },
  { "Old Slavonic", "chu", "cu" },
  { "Church Slavonic", "chu", "cu" },
  { "Old Bulgarian", "chu", "cu" },
  { "Old Church Slavonic", "chu", "cu" },
  { "Chuvash", "chv", "cv" },
  { "Cheyenne", "chy", 0 },
  { "Chamic languages", "cmc", 0 },
  { "Coptic", "cop", 0 },
  { "Cornish", "cor", "kw" },
  { "Corsican", "cos", "co" },
  { "Creoles and pidgins, English based (Other)", "cpe", 0 },
  { "Creoles and pidgins, French-based (Other)", "cpf", 0 },
  { "Creoles and pidgins, Portuguese-based (Other)", "cpp", 0 },
  { "Cree", "cre", "cr" },
  { "Crimean Tatar", "crh", 0 },
  { "Crimean Turkish", "crh", 0 },
  { "Creoles and pidgins (Other)", "crp", 0 },
  { "Kashubian", "csb", 0 },
  { "Cushitic (Other)", "cus", 0 },
  { "Welsh", "cym", "cy" },
  { "Czech", "cze", "cs" },
  { "Dakota", "dak", 0 },
  { "Danish", "dan", "da" },
  { "Dargwa", "dar", 0 },
  { "Land Dayak languages", "day", 0 },
  { "Delaware", "del", 0 },
  { "Slave (Athapascan)", "den", 0 },
  { "German", "deu", "de" },
  { "Dogrib", "dgr", 0 },
  { "Dinka", "din", 0 },
  { "Divehi", "div", "dv" },
  { "Dhivehi", "div", "dv" },
  { "Maldivian", "div", "dv" },
  { "Dogri", "doi", 0 },
  { "Dravidian (Other)", "dra", 0 },
  { "Lower Sorbian", "dsb", 0 },
  { "Duala", "dua", 0 },
  { "Dutch, Middle (ca.1050-1350)", "dum", 0 },
  { "Dutch", "dut", "nl" },
  { "Flemish", "dut", "nl" },
  { "Dyula", "dyu", 0 },
  { "Dzongkha", "dzo", "dz" },
  { "Efik", "efi", 0 },
  { "Egyptian (Ancient)", "egy", 0 },
  { "Ekajuk", "eka", 0 },
  { "Greek, Modern (1453-)", "ell", "el" },
  { "Elamite", "elx", 0 },
  { "English, Middle (1100-1500)", "enm", 0 },
  { "Esperanto", "epo", "eo" },
  { "Estonian", "est", "et" },
  { "Basque", "eus", "eu" },
  { "Ewe", "ewe", "ee" },
  { "Ewondo", "ewo", 0 },
  { "Fang", "fan", 0 },
  { "Faroese", "fao", "fo" },
  { "Persian", "fas", "fa" },
  { "Fanti", "fat", 0 },
  { "Fijian", "fij", "fj" },
  { "Filipino", "fil", 0 },
  { "Pilipino", "fil", 0 },
  { "Finnish", "fin", "fi" },
  { "Finno-Ugrian (Other)", "fiu", 0 },
  { "Fon", "fon", 0 },
  { "French", "fra", "fr" },
  { "French", "fre", "fr" },
  { "French, Middle (ca.1400-1600)", "frm", 0 },
  { "French, Old (842-ca.1400)", "fro", 0 },
  { "Northern Frisian", "frr", 0 },
  { "Eastern Frisian", "frs", 0 },
  { "Western Frisian", "fry", "fy" },
  { "Fulah", "ful", "ff" },
  { "Friulian", "fur", 0 },
  { "Ga", "gaa", 0 },
  { "Gayo", "gay", 0 },
  { "Gbaya", "gba", 0 },
  { "Germanic (Other)", "gem", 0 },
  { "Georgian", "geo", "ka" },
  { "German", "ger", "de" },
  { "Geez", "gez", 0 },
  { "Gilbertese", "gil", 0 },
  { "Gaelic", "gla", "gd" },
  { "Scottish Gaelic", "gla", "gd" },
  { "Irish", "gle", "ga" },
  { "Galician", "glg", "gl" },
  { "Manx", "glv", "gv" },
  { "German, Middle High (ca.1050-1500)", "gmh", 0 },
  { "German, Old High (ca.750-1050)", "goh", 0 },
  { "Gondi", "gon", 0 },
  { "Gorontalo", "gor", 0 },
  { "Gothic", "got", 0 },
  { "Grebo", "grb", 0 },
  { "Greek, Ancient (to 1453)", "grc", 0 },
  { "Greek, Modern (1453-)", "gre", "el" },
  { "Guarani", "grn", "gn" },
  { "Swiss German", "gsw", 0 },
  { "Alemannic", "gsw", 0 },
  { "Gujarati", "guj", "gu" },
  { "Gwich'in", "gwi", 0 },
  { "Haida", "hai", 0 },
  { "Haitian", "hat", "ht" },
  { "Haitian Creole", "hat", "ht" },
  { "Hausa", "hau", "ha" },
  { "Hawaiian", "haw", 0 },
  { "Hebrew", "heb", "he" },
  { "Herero", "her", "hz" },
  { "Hiligaynon", "hil", 0 },
  { "Himachali", "him", 0 },
  { "Hindi", "hin", "hi" },
  { "Hittite", "hit", 0 },
  { "Hmong", "hmn", 0 },
  { "Hiri Motu", "hmo", "ho" },
  { "Croatian", "hrv", "hr" },
  { "Upper Sorbian", "hsb", 0 },
  { "Hungarian", "hun", "hu" },
  { "Hupa", "hup", 0 },
  { "Armenian", "hye", "hy" },
  { "Iban", "iba", 0 },
  { "Igbo", "ibo", "ig" },
  { "Icelandic", "ice", "is" },
  { "Ido", "ido", "io" },
  { "Sichuan Yi", "iii", "ii" },
  { "Ijo languages", "ijo", 0 },
  { "Inuktitut", "iku", "iu" },
  { "Interlingue", "ile", "ie" },
  { "Iloko", "ilo", 0 },
  { "Interlingua (International Auxiliary Language Association)", "ina", "ia" },
  { "Indic (Other)", "inc", 0 },
  { "Indonesian", "ind", "id" },
  { "Indo-European (Other)", "ine", 0 },
  { "Ingush", "inh", 0 },
  { "Inupiaq", "ipk", "ik" },
  { "Iranian (Other)", "ira", 0 },
  { "Iroquoian languages", "iro", 0 },
  { "Icelandic", "isl", "is" },
  { "Italian", "ita", "it" },
  { "Javanese", "jav", "jv" },
  { "Lojban", "jbo", 0 },
  { "Japanese", "jpn", "ja" },
  { "Judeo-Persian", "jpr", 0 },
  { "Judeo-Arabic", "jrb", 0 },
  { "Kara-Kalpak", "kaa", 0 },
  { "Kabyle", "kab", 0 },
  { "Kachin", "kac", 0 },
  { "Jingpho", "kac", 0 },
  { "Kalaallisut", "kal", "kl" },
  { "Greenlandic", "kal", "kl" },
  { "Kamba", "kam", 0 },
  { "Kannada", "kan", "kn" },
  { "Karen languages", "kar", 0 },
  { "Kashmiri", "kas", "ks" },
  { "Georgian", "kat", "ka" },
  { "Kanuri", "kau", "kr" },
  { "Kawi", "kaw", 0 },
  { "Kazakh", "kaz", "kk" },
  { "Kabardian", "kbd", 0 },
  { "Khasi", "kha", 0 },
  { "Khoisan (Other)", "khi", 0 },
  { "Central Khmer", "khm", "km" },
  { "Khotanese", "kho", 0 },
  { "Kikuyu", "kik", "ki" },
  { "Gikuyu", "kik", "ki" },
  { "Kinyarwanda", "kin", "rw" },
  { "Kirghiz", "kir", "ky" },
  { "Kyrgyz", "kir", "ky" },
  { "Kimbundu", "kmb", 0 },
  { "Konkani", "kok", 0 },
  { "Komi", "kom", "kv" },
  { "Kongo", "kon", "kg" },
  { "Korean", "kor", "ko" },
  { "Kosraean", "kos", 0 },
  { "Kpelle", "kpe", 0 },
  { "Karachay-Balkar", "krc", 0 },
  { "Karelian", "krl", 0 },
  { "Kru languages", "kro", 0 },
  { "Kurukh", "kru", 0 },
  { "Kuanyama", "kua", "kj" },
  { "Kwanyama", "kua", "kj" },
  { "Kumyk", "kum", 0 },
  { "Kurdish", "kur", "ku" },
  { "Kutenai", "kut", 0 },
  { "Ladino", "lad", 0 },
  { "Lahnda", "lah", 0 },
  { "Lamba", "lam", 0 },
  { "Lao", "lao", "lo" },
  { "Latin", "lat", "la" },
  { "Latvian", "lav", "lv" },
  { "Lezghian", "lez", 0 },
  { "Limburgan", "lim", "li" },
  { "Limburger", "lim", "li" },
  { "Limburgish", "lim", "li" },
  { "Lingala", "lin", "ln" },
  { "Lithuanian", "lit", "lt" },
  { "Mongo", "lol", 0 },
  { "Lozi", "loz", 0 },
  { "Luxembourgish", "ltz", "lb" },
  { "Letzeburgesch", "ltz", "lb" },
  { "Luba-Lulua", "lua", 0 },
  { "Luba-Katanga", "lub", "lu" },
  { "Ganda", "lug", "lg" },
  { "Luiseno", "lui", 0 },
  { "Lunda", "lun", 0 },
  { "Luo (Kenya and Tanzania)", "luo", 0 },
  { "Lushai", "lus", 0 },
  { "Macedonian", "mac", "mk" },
  { "Madurese", "mad", 0 },
  { "Magahi", "mag", 0 },
  { "Marshallese", "mah", "mh" },
  { "Maithili", "mai", 0 },
  { "Makasar", "mak", 0 },
  { "Malayalam", "mal", "ml" },
  { "Mandingo", "man", 0 },
  { "Maori", "mao", "mi" },
  { "Austronesian (Other)", "map", 0 },
  { "Marathi", "mar", "mr" },
  { "Masai", "mas", 0 },
  { "Malay", "may", "ms" },
  { "Moksha", "mdf", 0 },
  { "Mandar", "mdr", 0 },
  { "Mende", "men", 0 },
  { "Irish, Middle (900-1200)", "mga", 0 },
  { "Mi'kmaq", "mic", 0 },
  { "Micmac", "mic", 0 },
  { "Minangkabau", "min", 0 },
  { "Miscellaneous languages", "mis", 0 },
  { "Macedonian", "mkd", "mk" },
  { "Mon-Khmer (Other)", "mkh", 0 },
  { "Malagasy", "mlg", "mg" },
  { "Maltese", "mlt", "mt" },
  { "Manchu", "mnc", 0 },
  { "Manipuri", "mni", 0 },
  { "Manobo languages", "mno", 0 },
  { "Mohawk", "moh", 0 },
  { "Moldavian", "mol", "mo" },
  { "Mongolian", "mon", "mn" },
  { "Mossi", "mos", 0 },
  { "Maori", "mri", "mi" },
  { "Malay", "msa", "ms" },
  { "Multiple languages", "mul", 0 },
  { "Munda languages", "mun", 0 },
  { "Creek", "mus", 0 },
  { "Mirandese", "mwl", 0 },
  { "Marwari", "mwr", 0 },
  { "Burmese", "mya", "my" },
  { "Mayan languages", "myn", 0 },
  { "Erzya", "myv", 0 },
  { "Nahuatl languages", "nah", 0 },
  { "North American Indian", "nai", 0 },
  { "Neapolitan", "nap", 0 },
  { "Nauru", "nau", "na" },
  { "Navajo", "nav", "nv" },
  { "Navaho", "nav", "nv" },
  { "Ndebele, South", "nbl", "nr" },
  { "South Ndebele", "nbl", "nr" },
  { "Ndebele, North", "nde", "nd" },
  { "North Ndebele", "nde", "nd" },
  { "Ndonga", "ndo", "ng" },
  { "Low German", "nds", 0 },
  { "Low Saxon", "nds", 0 },
  { "German, Low", "nds", 0 },
  { "Saxon, Low", "nds", 0 },
  { "Nepali", "nep", "ne" },
  { "Nepal Bhasa", "new", 0 },
  { "Newari", "new", 0 },
  { "Nias", "nia", 0 },
  { "Niger-Kordofanian (Other)", "nic", 0 },
  { "Niuean", "niu", 0 },
  { "Dutch", "nld", "nl" },
  { "Flemish", "nld", "nl" },
  { "Norwegian Nynorsk", "nno", "nn" },
  { "Nynorsk, Norwegian", "nno", "nn" },
  { "Bokmal, Norwegian", "nob", "nb" },
  { "Norwegian Bokmal", "nob", "nb" },
  { "Nogai", "nog", 0 },
  { "Norse, Old", "non", 0 },
  { "Norwegian", "nor", "no" },
  { "N'Ko", "nqo", 0 },
  { "Pedi", "nso", 0 },
  { "Sepedi", "nso", 0 },
  { "Northern Sotho", "nso", 0 },
  { "Nubian languages", "nub", 0 },
  { "Classical Newari", "nwc", 0 },
  { "Old Newari", "nwc", 0 },
  { "Classical Nepal Bhasa", "nwc", 0 },
  { "Chichewa", "nya", "ny" },
  { "Chewa", "nya", "ny" },
  { "Nyanja", "nya", "ny" },
  { "Nyamwezi", "nym", 0 },
  { "Nyankole", "nyn", 0 },
  { "Nyoro", "nyo", 0 },
  { "Nzima", "nzi", 0 },
  { "Occitan (post 1500)", "oci", "oc" },
  { "Provencal", "oci", "oc" },
  { "Ojibwa", "oji", "oj" },
  { "Oriya", "ori", "or" },
  { "Oromo", "orm", "om" },
  { "Osage", "osa", 0 },
  { "Ossetian", "oss", "os" },
  { "Ossetic", "oss", "os" },
  { "Turkish, Ottoman (1500-1928)", "ota", 0 },
  { "Otomian languages", "oto", 0 },
  { "Papuan (Other)", "paa", 0 },
  { "Pangasinan", "pag", 0 },
  { "Pahlavi", "pal", 0 },
  { "Pampanga", "pam", 0 },
  { "Panjabi", "pan", "pa" },
  { "Punjabi", "pan", "pa" },
  { "Papiamento", "pap", 0 },
  { "Palauan", "pau", 0 },
  { "Persian, Old (ca.600-400 B.C.)", "peo", 0 },
  { "Persian", "per", "fa" },
  { "Philippine (Other)", "phi", 0 },
  { "Phoenician", "phn", 0 },
  { "Pali", "pli", "pi" },
  { "Polish", "pol", "pl" },
  { "Pohnpeian", "pon", 0 },
  { "Portuguese", "por", "pt" },
  { "Prakrit languages", "pra", 0 },
  { "Provencal, Old (to 1500)", "pro", 0 },
  { "Pushto", "pus", "ps" },
  { "Reserved for local use", "qaa-qtz", 0 },
  { "Quechua", "que", "qu" },
  { "Rajasthani", "raj", 0 },
  { "Rapanui", "rap", 0 },
  { "Rarotongan", "rar", 0 },
  { "Cook Islands Maori", "rar", 0 },
  { "Romance (Other)", "roa", 0 },
  { "Romansh", "roh", "rm" },
  { "Romany", "rom", 0 },
  { "Romanian", "ron", "ro" },
  { "Romanian", "rum", "ro" },
  { "Rundi", "run", "rn" },
  { "Aromanian", "rup", 0 },
  { "Arumanian", "rup", 0 },
  { "Macedo-Romanian", "rup", 0 },
  { "Russian", "rus", "ru" },
  { "Sandawe", "sad", 0 },
  { "Sango", "sag", "sg" },
  { "Yakut", "sah", 0 },
  { "South American Indian (Other)", "sai", 0 },
  { "Salishan languages", "sal", 0 },
  { "Samaritan Aramaic", "sam", 0 },
  { "Sanskrit", "san", "sa" },
  { "Sasak", "sas", 0 },
  { "Santali", "sat", 0 },
  { "Serbian", "scc", "sr" },
  { "Sicilian", "scn", 0 },
  { "Scots", "sco", 0 },
  { "Croatian", "scr", "hr" },
  { "Selkup", "sel", 0 },
  { "Semitic (Other)", "sem", 0 },
  { "Irish, Old (to 900)", "sga", 0 },
  { "Sign Languages", "sgn", 0 },
  { "Shan", "shn", 0 },
  { "Sidamo", "sid", 0 },
  { "Sinhala", "sin", "si" },
  { "Sinhalese", "sin", "si" },
  { "Siouan languages", "sio", 0 },
  { "Sino-Tibetan (Other)", "sit", 0 },
  { "Slavic (Other)", "sla", 0 },
  { "Slovak", "slk", "sk" },
  { "Slovak", "slo", "sk" },
  { "Slovenian", "slv", "sl" },
  { "Southern Sami", "sma", 0 },
  { "Northern Sami", "sme", "se" },
  { "Sami languages (Other)", "smi", 0 },
  { "Lule Sami", "smj", 0 },
  { "Inari Sami", "smn", 0 },
  { "Samoan", "smo", "sm" },
  { "Skolt Sami", "sms", 0 },
  { "Shona", "sna", "sn" },
  { "Sindhi", "snd", "sd" },
  { "Soninke", "snk", 0 },
  { "Sogdian", "sog", 0 },
  { "Somali", "som", "so" },
  { "Songhai languages", "son", 0 },
  { "Sotho, Southern", "sot", "st" },
  { "Spanish", "spa", "es" },
  { "Castilian", "spa", "es" },
  { "Albanian", "sqi", "sq" },
  { "Sardinian", "srd", "sc" },
  { "Sranan Tongo", "srn", 0 },
  { "Serbian", "srp", "sr" },
  { "Serer", "srr", 0 },
  { "Nilo-Saharan (Other)", "ssa", 0 },
  { "Swati", "ssw", "ss" },
  { "Sukuma", "suk", 0 },
  { "Sundanese", "sun", "su" },
  { "Susu", "sus", 0 },
  { "Sumerian", "sux", 0 },
  { "Swahili", "swa", "sw" },
  { "Swedish", "swe", "sv" },
  { "Classical Syriac", "syc", 0 },
  { "Syriac", "syr", 0 },
  { "Tahitian", "tah", "ty" },
  { "Tai (Other)", "tai", 0 },
  { "Tamil", "tam", "ta" },
  { "Tatar", "tat", "tt" },
  { "Telugu", "tel", "te" },
  { "Timne", "tem", 0 },
  { "Tereno", "ter", 0 },
  { "Tetum", "tet", 0 },
  { "Tajik", "tgk", "tg" },
  { "Tagalog", "tgl", "tl" },
  { "Thai", "tha", "th" },
  { "Tibetan", "tib", "bo" },
  { "Tigre", "tig", 0 },
  { "Tigrinya", "tir", "ti" },
  { "Tiv", "tiv", 0 },
  { "Tokelau", "tkl", 0 },
  { "Klingon", "tlh", 0 },
  { "tlhIngan-Hol", "tlh", 0 },
  { "Tlingit", "tli", 0 },
  { "Tamashek", "tmh", 0 },
  { "Tonga (Nyasa)", "tog", 0 },
  { "Tonga (Tonga Islands)", "ton", "to" },
  { "Tok Pisin", "tpi", 0 },
  { "Tsimshian", "tsi", 0 },
  { "Tswana", "tsn", "tn" },
  { "Tsonga", "tso", "ts" },
  { "Turkmen", "tuk", "tk" },
  { "Tumbuka", "tum", 0 },
  { "Tupi languages", "tup", 0 },
  { "Turkish", "tur", "tr" },
  { "Altaic (Other)", "tut", 0 },
  { "Tuvalu", "tvl", 0 },
  { "Twi", "twi", "tw" },
  { "Tuvinian", "tyv", 0 },
  { "Udmurt", "udm", 0 },
  { "Ugaritic", "uga", 0 },
  { "Uighur", "uig", "ug" },
  { "Uyghur", "uig", "ug" },
  { "Ukrainian", "ukr", "uk" },
  { "Umbundu", "umb", 0 },
  { "Undetermined", "und", 0 },
  { "Urdu", "urd", "ur" },
  { "Uzbek", "uzb", "uz" },
  { "Vai", "vai", 0 },
  { "Venda", "ven", "ve" },
  { "Vietnamese", "vie", "vi" },
  { "Volapuk", "vol", "vo" },
  { "Votic", "vot", 0 },
  { "Wakashan languages", "wak", 0 },
  { "Walamo", "wal", 0 },
  { "Waray", "war", 0 },
  { "Washo", "was", 0 },
  { "Welsh", "wel", "cy" },
  { "Sorbian languages", "wen", 0 },
  { "Walloon", "wln", "wa" },
  { "Wolof", "wol", "wo" },
  { "Kalmyk", "xal", 0 },
  { "Oirat", "xal", 0 },
  { "Xhosa", "xho", "xh" },
  { "Yao", "yao", 0 },
  { "Yapese", "yap", 0 },
  { "Yiddish", "yid", "yi" },
  { "Yoruba", "yor", "yo" },
  { "Yupik languages", "ypk", 0 },
  { "Zapotec", "zap", 0 },
  { "Zenaga", "zen", 0 },
  { "Zhuang", "zha", "za" },
  { "Chuang", "zha", "za" },
  { "Chinese", "zho", "zh" },
  { "Zande languages", "znd", 0 },
  { "Zulu", "zul", "zu" },
  { "Zuni", "zun", 0 },
  { "No linguistic content", "zxx", 0 },
  { "Zaza", "zza", 0 },
  { "Dimili", "zza", 0 },
  { "Dimli", "zza", 0 },
  { "Kirdki", "zza", 0 },
  { "Kirmanjki", "zza", 0 },
  { "Zazaki", "zza", 0 },
  { 0, 0, 0 }
};
