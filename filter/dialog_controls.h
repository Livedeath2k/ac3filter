// File is generated by build_controls script from resource script.
// (see comments at the script)

#ifndef DIALOG_CONTROLS_H
#define DIALOG_CONTROLS_H

struct ControlDesc
{
  int id;
  const char *strid;
  const char *label;
  const char *tip;
};

// Total groups: 35
// Total controls: 154
static const ControlDesc dialog_controls[] =
{
  // Controls without a group
  /* TRANSLATORS: Cancel */
  { IDCANCEL, N_("IDCANCEL"), "Cancel", "" },
  /* TRANSLATORS: Donate */
  { IDC_BTN_DONATE, N_("IDC_BTN_DONATE"), "Donate", "" },
  /* TRANSLATORS: Help */
  { IDC_BTN_HELP, N_("IDC_BTN_HELP"), "Help", "" },
  /* TRANSLATORS: Log scale spectrum */
  { IDC_CHK_EQ_LOG, N_("IDC_CHK_EQ_LOG"), "Log scale spectrum", "" },
  /* TRANSLATORS: Frequency (Hz) */
  { IDC_LBL_EQ_FREQ, N_("IDC_LBL_EQ_FREQ"), "Frequency (Hz)", "" },
  /* TRANSLATORS: Gain (dB) */
  { IDC_LBL_EQ_GAIN, N_("IDC_LBL_EQ_GAIN"), "Gain (dB)", "" },
  /* TRANSLATORS: Filter length: */
  { IDC_LBL_EQ_LEN, N_("IDC_LBL_EQ_LEN"), "Filter length:", "" },
  /* TRANSLATORS: LFE */
  { IDC_LBL_LFE, N_("IDC_LBL_LFE"), "LFE", "" },
  /* TRANSLATORS: Surround */
  { IDC_LBL_SUR, N_("IDC_LBL_SUR"), "Surround", "" },
  /* TRANSLATORS: Voice */
  { IDC_LBL_VOICE, N_("IDC_LBL_VOICE"), "Voice", "" },
  /* TRANSLATORS: Save all (multichannel and master equalizers). */
  { IDC_RBT_EQ_ALL, N_("IDC_RBT_EQ_ALL"), "Save all (multichannel and master equalizers).", "" },
  /* TRANSLATORS: Save current channel only, so you can apply this preset to any channel. */
  { IDC_RBT_EQ_CUR, N_("IDC_RBT_EQ_CUR"), "Save current channel only, so you can apply this preset to any channel.", "" },
  /* TRANSLATORS: Save all channels (except Master), so you can restore multichannel setup later. */
  { IDC_RBT_EQ_MCH, N_("IDC_RBT_EQ_MCH"), "Save all channels (except Master), so you can restore multichannel setup later.", "" },
  /* TRANSLATORS: AC3Filter ver. %s Copyright (c) 2002-2012 by Alexander Vigovsky */
  { IDC_VER, N_("IDC_VER"), "AC3Filter ver. %s Copyright (c) 2002-2012 by Alexander Vigovsky", "" },
  /* TRANSLATORS: OK */
  { IDOK, N_("IDOK"), "OK", "" },

  // What is it?
  /* TRANSLATORS: What is it? */
  { IDC_GRP_ABOUT, N_("IDC_GRP_ABOUT"), "What is it?", "" },
  /* TRANSLATORS: AC3Filter is a high quality free DirectShow filter designed for real time audio decoding and processing. It has a priority on wide functionality and convenient settings. Supports multi-channel and digital (SPDIF) outputs. */
  { IDC_LBL_ABOUT1, N_("IDC_LBL_ABOUT1"), "AC3Filter is a high quality free DirectShow filter designed for real time audio decoding and processing. It has a priority on wide functionality and convenient settings. Supports multi-channel and digital (SPDIF) outputs.", "" },
  /* TRANSLATORS: It is used automatically by most multimedia players. Required to playback AVI files with AC3 or DTS audio tracks. Also can be used to playback DVD. */
  { IDC_LBL_ABOUT2, N_("IDC_LBL_ABOUT2"), "It is used automatically by most multimedia players. Required to playback AVI files with AC3 or DTS audio tracks. Also can be used to playback DVD.", "" },

  // AGC
  /* TRANSLATORS: AGC */
  { IDC_GRP_AGC, N_("IDC_GRP_AGC"), "AGC", "" },
  /* TRANSLATORS: Attack/release speed (dB/s): */
  { IDC_LBL_ATTACK_RELEASE, N_("IDC_LBL_ATTACK_RELEASE"), "Attack/release speed (dB/s):", "" },

  // Bass redirection
  /* TRANSLATORS: Bass redirection */
  { IDC_GRP_BASS, N_("IDC_GRP_BASS"), "Bass redirection", "" },
  /* TRANSLATORS: Enable */
  { IDC_CHK_BASS_ENABLE, N_("IDC_CHK_BASS_ENABLE"), "Enable", "" },
  /* TRANSLATORS: Cutoff frequency */
  { IDC_LBL_BASS_FREQ, N_("IDC_LBL_BASS_FREQ"), "Cutoff frequency", "" },
  /* TRANSLATORS: Bass destination: */
  { IDC_LBL_BASS_ROUTE, N_("IDC_LBL_BASS_ROUTE"), "Bass destination:", "" },
  /* TRANSLATORS: Front channels */
  { IDC_RBT_BASS_FRONT, N_("IDC_RBT_BASS_FRONT"), "Front channels", "" },
  /* TRANSLATORS: Subwoofer */
  { IDC_RBT_BASS_SUB, N_("IDC_RBT_BASS_SUB"), "Subwoofer", "" },

  // Contact author
  /* TRANSLATORS: Contact author */
  { IDC_GRP_CONTACT, N_("IDC_GRP_CONTACT"), "Contact author", "" },
  /* TRANSLATORS: Please report about all bugs. Feel free to email author with your ideas, criticism, etc. Please write in English or Russian only. Subject should contain 'AC3Filter' word (due to automatic filtering). */
  { IDC_LBL_CONTACT, N_("IDC_LBL_CONTACT"), "Please report about all bugs. Feel free to email author with your ideas, criticism, etc. Please write in English or Russian only. Subject should contain 'AC3Filter' word (due to automatic filtering).", "" },
  /* TRANSLATORS: mail to author|mailto:ac3filter@gmail.com?Subject=AC3Filter */
  { IDC_LNK_EMAIL, N_("IDC_LNK_EMAIL"), "mail to author|mailto:ac3filter@gmail.com?Subject=AC3Filter", "" },
  /* TRANSLATORS: Project forum|http://ac3filter.net/forum/ */
  { IDC_LNK_FORUM, N_("IDC_LNK_FORUM"), "Project forum|http://ac3filter.net/forum/", "" },
  /* TRANSLATORS: Homepage|http://ac3filter.net/ */
  { IDC_LNK_HOME, N_("IDC_LNK_HOME"), "Homepage|http://ac3filter.net/", "" },

  // CPU
  /* TRANSLATORS: CPU */
  { IDC_GRP_CPU, N_("IDC_GRP_CPU"), "CPU", "" },
  { IDC_CPU, "IDC_CPU", "", "" },
  /* TRANSLATORS: 0% */
  { IDC_CPU_LABEL, N_("IDC_CPU_LABEL"), "0%", "" },

  // Thanks to
  /* TRANSLATORS: Thanks to */
  { IDC_GRP_CREDITS, N_("IDC_GRP_CREDITS"), "Thanks to", "" },

  // Debug
  /* TRANSLATORS: Debug */
  { IDC_GRP_DEBUG, N_("IDC_GRP_DEBUG"), "Debug", "" },
  /* TRANSLATORS: Error report */
  { IDC_BTN_ERROR_REPORT, N_("IDC_BTN_ERROR_REPORT"), "Error report", "" },
  /* TRANSLATORS: Save logs on exit */
  { IDC_CHK_SAVE_LOGS, N_("IDC_CHK_SAVE_LOGS"), "Save logs on exit", "" },
  /* TRANSLATORS: Feedback email: */
  { IDC_LBL_FEEDBACK, N_("IDC_LBL_FEEDBACK"), "Feedback email:", "" },
  /* TRANSLATORS: How to report a bug?|http://ac3filter.net/wiki/AC3Filter:How_to_report_a_bug */
  { IDC_LNK_ERROR_REPORT, N_("IDC_LNK_ERROR_REPORT"), "How to report a bug?|http://ac3filter.net/wiki/AC3Filter:How_to_report_a_bug", "" },

  // Decoder info
  /* TRANSLATORS: Decoder info */
  { IDC_GRP_DECODER_INFO, N_("IDC_GRP_DECODER_INFO"), "Decoder info", "" },
  /* TRANSLATORS: Frames / Errors */
  { IDC_LBL_FRAMES_ERRORS, N_("IDC_LBL_FRAMES_ERRORS"), "Frames / Errors", "" },

  // Delays
  /* TRANSLATORS: Delays */
  { IDC_GRP_DELAYS, N_("IDC_GRP_DELAYS"), "Delays", "" },
  /* TRANSLATORS: Reset */
  { IDC_BTN_DELAYS_RESET, N_("IDC_BTN_DELAYS_RESET"), "Reset", "" },
  /* TRANSLATORS: Enable */
  { IDC_CHK_DELAYS, N_("IDC_CHK_DELAYS"), "Enable", "" },
  /* TRANSLATORS: Units: */
  { IDC_LBL_DELAY_UNITS, N_("IDC_LBL_DELAY_UNITS"), "Units:", "" },

  // DRC
  /* TRANSLATORS: DRC */
  { IDC_GRP_DRC, N_("IDC_GRP_DRC"), "DRC", "" },
  /* TRANSLATORS: Enable */
  { IDC_CHK_DRC, N_("IDC_CHK_DRC"), "Enable", "" },
  { IDC_SLI_DRC_LEVEL, "IDC_SLI_DRC_LEVEL", "", "" },
  { IDC_SLI_DRC_POWER, "IDC_SLI_DRC_POWER", "", "" },

  // DirectShow options
  /* TRANSLATORS: DirectShow options */
  { IDC_GRP_DSHOW, N_("IDC_GRP_DSHOW"), "DirectShow options", "" },
  /* TRANSLATORS: Check output format support */
  { IDC_CHK_QUERY_SINK, N_("IDC_CHK_QUERY_SINK"), "Check output format support", "" },
  /* TRANSLATORS: Force sound card to reinit after seek / pause */
  { IDC_CHK_REINIT, N_("IDC_CHK_REINIT"), "Force sound card to reinit after seek / pause", "" },
  /* TRANSLATORS: Disallow PCM output in SPDIF mode */
  { IDC_CHK_SPDIF_NO_PCM, N_("IDC_CHK_SPDIF_NO_PCM"), "Disallow PCM output in SPDIF mode", "" },

  // SPDIF/DTS conversion
  /* TRANSLATORS: SPDIF/DTS conversion */
  { IDC_GRP_DTS_CONV, N_("IDC_GRP_DTS_CONV"), "SPDIF/DTS conversion", "" },
  /* TRANSLATORS: Convert to DTS14 */
  { IDC_RBT_DTS_CONV_14BIT, N_("IDC_RBT_DTS_CONV_14BIT"), "Convert to DTS14", "" },
  /* TRANSLATORS: Convert to DTS16 */
  { IDC_RBT_DTS_CONV_16BIT, N_("IDC_RBT_DTS_CONV_16BIT"), "Convert to DTS16", "" },
  /* TRANSLATORS: Do not convert */
  { IDC_RBT_DTS_CONV_NONE, N_("IDC_RBT_DTS_CONV_NONE"), "Do not convert", "" },

  // SPDIF/DTS mode
  /* TRANSLATORS: SPDIF/DTS mode */
  { IDC_GRP_DTS_MODE, N_("IDC_GRP_DTS_MODE"), "SPDIF/DTS mode", "" },
  /* TRANSLATORS: Auto */
  { IDC_RBT_DTS_MODE_AUTO, N_("IDC_RBT_DTS_MODE_AUTO"), "Auto", "" },
  /* TRANSLATORS: Padded DTS */
  { IDC_RBT_DTS_MODE_PADDED, N_("IDC_RBT_DTS_MODE_PADDED"), "Padded DTS", "" },
  /* TRANSLATORS: SPDIF wrapped */
  { IDC_RBT_DTS_MODE_WRAPPED, N_("IDC_RBT_DTS_MODE_WRAPPED"), "SPDIF wrapped", "" },

  // Equalizer
  /* TRANSLATORS: Equalizer */
  { IDC_GRP_EQ, N_("IDC_GRP_EQ"), "Equalizer", "" },
  { IDC_SLI_EQ1, "IDC_SLI_EQ1", "", "" },
  { IDC_SLI_EQ10, "IDC_SLI_EQ10", "", "" },
  { IDC_SLI_EQ2, "IDC_SLI_EQ2", "", "" },
  { IDC_SLI_EQ3, "IDC_SLI_EQ3", "", "" },
  { IDC_SLI_EQ4, "IDC_SLI_EQ4", "", "" },
  { IDC_SLI_EQ5, "IDC_SLI_EQ5", "", "" },
  { IDC_SLI_EQ6, "IDC_SLI_EQ6", "", "" },
  { IDC_SLI_EQ7, "IDC_SLI_EQ7", "", "" },
  { IDC_SLI_EQ8, "IDC_SLI_EQ8", "", "" },
  { IDC_SLI_EQ9, "IDC_SLI_EQ9", "", "" },

  // Equalizer options
  /* TRANSLATORS: Equalizer options */
  { IDC_GRP_EQ_OPTIONS, N_("IDC_GRP_EQ_OPTIONS"), "Equalizer options", "" },
  /* TRANSLATORS: Custom */
  { IDC_BTN_EQ_CUSTOM, N_("IDC_BTN_EQ_CUSTOM"), "Custom", "" },
  /* TRANSLATORS: Reset */
  { IDC_BTN_EQ_RESET, N_("IDC_BTN_EQ_RESET"), "Reset", "" },
  /* TRANSLATORS: Enable */
  { IDC_CHK_EQ, N_("IDC_CHK_EQ"), "Enable", "" },

  // Equalizer preset
  /* TRANSLATORS: Equalizer preset */
  { IDC_GRP_EQ_PRESET, N_("IDC_GRP_EQ_PRESET"), "Equalizer preset", "" },
  /* TRANSLATORS: Delete */
  { IDC_BTN_EQ_DELETE, N_("IDC_BTN_EQ_DELETE"), "Delete", "" },
  /* TRANSLATORS: Save */
  { IDC_BTN_EQ_SAVE, N_("IDC_BTN_EQ_SAVE"), "Save", "" },

  // Use AC3Filter for:
  /* TRANSLATORS: Use AC3Filter for: */
  { IDC_GRP_FORMATS, N_("IDC_GRP_FORMATS"), "Use AC3Filter for:", "" },

  // Gain
  /* TRANSLATORS: Gain */
  { IDC_GRP_GAIN, N_("IDC_GRP_GAIN"), "Gain", "" },
  /* TRANSLATORS: Gain */
  { IDC_LBL_GAIN, N_("IDC_LBL_GAIN"), "Gain", "" },
  /* TRANSLATORS: Master */
  { IDC_LBL_MASTER, N_("IDC_LBL_MASTER"), "Master", "" },
  { IDC_SLI_GAIN, "IDC_SLI_GAIN", "", "" },
  { IDC_SLI_MASTER, "IDC_SLI_MASTER", "", "" },

  // Input gains
  /* TRANSLATORS: Input gains */
  { IDC_GRP_INPUT_GAINS, N_("IDC_GRP_INPUT_GAINS"), "Input gains", "" },

  // Input levels
  /* TRANSLATORS: Input levels */
  { IDC_GRP_INPUT_LEVELS, N_("IDC_GRP_INPUT_LEVELS"), "Input levels", "" },

  // Interface options
  /* TRANSLATORS: Interface options */
  { IDC_GRP_INTERFACE, N_("IDC_GRP_INTERFACE"), "Interface options", "" },
  /* TRANSLATORS: Invert levels */
  { IDC_CHK_INVERT_LEVELS, N_("IDC_CHK_INVERT_LEVELS"), "Invert levels", "" },
  /* TRANSLATORS: Show tooltips */
  { IDC_CHK_TOOLTIPS, N_("IDC_CHK_TOOLTIPS"), "Show tooltips", "" },
  /* TRANSLATORS: Show tray icon */
  { IDC_CHK_TRAY, N_("IDC_CHK_TRAY"), "Show tray icon", "" },
  /* TRANSLATORS: Interface update rate (ms) */
  { IDC_LBL_REFRESH_TIME, N_("IDC_LBL_REFRESH_TIME"), "Interface update rate (ms)", "" },

  // License
  /* TRANSLATORS: License */
  { IDC_GRP_LICENSE, N_("IDC_GRP_LICENSE"), "License", "" },
  /* TRANSLATORS: This program is free software and can be distributed according to the terms of GNU General Public License version 2. */
  { IDC_LBL_LICENSE, N_("IDC_LBL_LICENSE"), "This program is free software and can be distributed according to the terms of GNU General Public License version 2.", "" },

  // Mixing matrix
  /* TRANSLATORS: Mixing matrix */
  { IDC_GRP_MATRIX, N_("IDC_GRP_MATRIX"), "Mixing matrix", "" },

  // Matrix preset
  /* TRANSLATORS: Matrix preset */
  { IDC_GRP_MATRIX_PRESET, N_("IDC_GRP_MATRIX_PRESET"), "Matrix preset", "" },
  /* TRANSLATORS: Delete */
  { IDC_BTN_MATRIX_DELETE, N_("IDC_BTN_MATRIX_DELETE"), "Delete", "" },
  /* TRANSLATORS: Save */
  { IDC_BTN_MATRIX_SAVE, N_("IDC_BTN_MATRIX_SAVE"), "Save", "" },

  // Filter merit
  /* TRANSLATORS: Filter merit */
  { IDC_GRP_MERIT, N_("IDC_GRP_MERIT"), "Filter merit", "" },
  /* TRANSLATORS: Disable AC3Filter */
  { IDC_RBT_MERIT_DO_NOT_USE, N_("IDC_RBT_MERIT_DO_NOT_USE"), "Disable AC3Filter", "" },
  /* TRANSLATORS: Prefer AC3Filter */
  { IDC_RBT_MERIT_PREFERRED, N_("IDC_RBT_MERIT_PREFERRED"), "Prefer AC3Filter", "" },
  /* TRANSLATORS: Prefer other decoder */
  { IDC_RBT_MERIT_UNLIKELY, N_("IDC_RBT_MERIT_UNLIKELY"), "Prefer other decoder", "" },

  // Options
  /* TRANSLATORS: Options */
  { IDC_GRP_MIXER_OPTIONS, N_("IDC_GRP_MIXER_OPTIONS"), "Options", "" },
  /* TRANSLATORS: Auto gain control */
  { IDC_CHK_AUTO_GAIN, N_("IDC_CHK_AUTO_GAIN"), "Auto gain control", "" },
  /* TRANSLATORS: Auto matrix */
  { IDC_CHK_AUTO_MATRIX, N_("IDC_CHK_AUTO_MATRIX"), "Auto matrix", "" },
  /* TRANSLATORS: Expand stereo */
  { IDC_CHK_EXPAND_STEREO, N_("IDC_CHK_EXPAND_STEREO"), "Expand stereo", "" },
  /* TRANSLATORS: One-pass norm */
  { IDC_CHK_NORMALIZE, N_("IDC_CHK_NORMALIZE"), "One-pass norm", "" },
  /* TRANSLATORS: Normalize matrix */
  { IDC_CHK_NORM_MATRIX, N_("IDC_CHK_NORM_MATRIX"), "Normalize matrix", "" },
  /* TRANSLATORS: Voice control */
  { IDC_CHK_VOICE_CONTROL, N_("IDC_CHK_VOICE_CONTROL"), "Voice control", "" },

  // Output format
  /* TRANSLATORS: Output format */
  { IDC_GRP_OUTPUT, N_("IDC_GRP_OUTPUT"), "Output format", "" },
  /* TRANSLATORS: Use SPDIF */
  { IDC_CHK_USE_SPDIF, N_("IDC_CHK_USE_SPDIF"), "Use SPDIF", "" },
  /* TRANSLATORS: Format */
  { IDC_LBL_FORMAT, N_("IDC_LBL_FORMAT"), "Format", "" },
  /* TRANSLATORS: input format */
  { IDC_LBL_INPUT, N_("IDC_LBL_INPUT"), "input format", "" },
  /* TRANSLATORS: Rate */
  { IDC_LBL_RATE, N_("IDC_LBL_RATE"), "Rate", "" },

  // Output gains
  /* TRANSLATORS: Output gains */
  { IDC_GRP_OUTPUT_GAINS, N_("IDC_GRP_OUTPUT_GAINS"), "Output gains", "" },

  // Output levels
  /* TRANSLATORS: Output levels */
  { IDC_GRP_OUTPUT_LEVELS, N_("IDC_GRP_OUTPUT_LEVELS"), "Output levels", "" },
  { IDC_LEVEL_OUT1, "IDC_LEVEL_OUT1", "", "" },
  { IDC_LEVEL_OUT2, "IDC_LEVEL_OUT2", "", "" },
  { IDC_LEVEL_OUT3, "IDC_LEVEL_OUT3", "", "" },
  { IDC_LEVEL_OUT4, "IDC_LEVEL_OUT4", "", "" },
  { IDC_LEVEL_OUT5, "IDC_LEVEL_OUT5", "", "" },
  { IDC_LEVEL_OUT6, "IDC_LEVEL_OUT6", "", "" },

  // Preset
  /* TRANSLATORS: Preset */
  { IDC_GRP_PRESET, N_("IDC_GRP_PRESET"), "Preset", "" },
  /* TRANSLATORS: Delete */
  { IDC_BTN_PRESET_DELETE, N_("IDC_BTN_PRESET_DELETE"), "Delete", "" },
  /* TRANSLATORS: File */
  { IDC_BTN_PRESET_FILE, N_("IDC_BTN_PRESET_FILE"), "File", "" },
  /* TRANSLATORS: Save */
  { IDC_BTN_PRESET_SAVE, N_("IDC_BTN_PRESET_SAVE"), "Save", "" },

  // Default audio renderer
  /* TRANSLATORS: Default audio renderer */
  { IDC_GRP_RENDERER, N_("IDC_GRP_RENDERER"), "Default audio renderer", "" },
  /* TRANSLATORS: Use Direct Sound by default */
  { IDC_RBT_RENDER_DS, N_("IDC_RBT_RENDER_DS"), "Use Direct Sound by default", "" },
  /* TRANSLATORS: Use Wave Out by default */
  { IDC_RBT_RENDER_WO, N_("IDC_RBT_RENDER_WO"), "Use Wave Out by default", "" },

  // SPDIF options
  /* TRANSLATORS: SPDIF options */
  { IDC_GRP_SPDIF, N_("IDC_GRP_SPDIF"), "SPDIF options", "" },
  /* TRANSLATORS: 32kHz */
  { IDC_CHK_SPDIF_ALLOW_32, N_("IDC_CHK_SPDIF_ALLOW_32"), "32kHz", "" },
  /* TRANSLATORS: 44kHz */
  { IDC_CHK_SPDIF_ALLOW_44, N_("IDC_CHK_SPDIF_ALLOW_44"), "44kHz", "" },
  /* TRANSLATORS: 48kHz */
  { IDC_CHK_SPDIF_ALLOW_48, N_("IDC_CHK_SPDIF_ALLOW_48"), "48kHz", "" },
  /* TRANSLATORS: Output SPDIF as PCM */
  { IDC_CHK_SPDIF_AS_PCM, N_("IDC_CHK_SPDIF_AS_PCM"), "Output SPDIF as PCM", "" },
  /* TRANSLATORS: Restrict SPDIF sample rate */
  { IDC_CHK_SPDIF_CHECK_SR, N_("IDC_CHK_SPDIF_CHECK_SR"), "Restrict SPDIF sample rate", "" },
  /* TRANSLATORS: Use AC3 encoder */
  { IDC_CHK_SPDIF_ENCODE, N_("IDC_CHK_SPDIF_ENCODE"), "Use AC3 encoder", "" },
  /* TRANSLATORS: Do not encode stereo PCM */
  { IDC_CHK_SPDIF_STEREO_PT, N_("IDC_CHK_SPDIF_STEREO_PT"), "Do not encode stereo PCM", "" },
  /* TRANSLATORS: Detect SPDIF stream in PCM data */
  { IDC_CHK_USE_DETECTOR, N_("IDC_CHK_USE_DETECTOR"), "Detect SPDIF stream in PCM data", "" },
  /* TRANSLATORS: AC3 encoder bitrate (kbps) */
  { IDC_LBL_SPDIF_BITRATE, N_("IDC_LBL_SPDIF_BITRATE"), "AC3 encoder bitrate (kbps)", "" },

  // SPDIF passthrough
  /* TRANSLATORS: SPDIF passthrough */
  { IDC_GRP_SPDIF_PT, N_("IDC_GRP_SPDIF_PT"), "SPDIF passthrough", "" },
  /* TRANSLATORS: AC3 */
  { IDC_CHK_SPDIF_AC3, N_("IDC_CHK_SPDIF_AC3"), "AC3", "" },
  /* TRANSLATORS: DTS */
  { IDC_CHK_SPDIF_DTS, N_("IDC_CHK_SPDIF_DTS"), "DTS", "" },
  /* TRANSLATORS: MPEG Audio */
  { IDC_CHK_SPDIF_MPA, N_("IDC_CHK_SPDIF_MPA"), "MPEG Audio", "" },

  // Audio/Video sync
  /* TRANSLATORS: Audio/Video sync */
  { IDC_GRP_SYNC, N_("IDC_GRP_SYNC"), "Audio/Video sync", "" },
  /* TRANSLATORS: Jitter correction. */
  { IDC_CHK_JITTER, N_("IDC_CHK_JITTER"), "Jitter correction.", "" },
  /* TRANSLATORS: Current jitter: */
  { IDC_LBL_JITTER, N_("IDC_LBL_JITTER"), "Current jitter:", "" },
  /* TRANSLATORS: Time shift (ms): */
  { IDC_LBL_TIME_SHIFT, N_("IDC_LBL_TIME_SHIFT"), "Time shift (ms):", "" },
  /* TRANSLATORS: <- sound lags */
  { IDC_LBL_TIME_SHIFT_MINUS, N_("IDC_LBL_TIME_SHIFT_MINUS"), "<- sound lags", "" },
  /* TRANSLATORS: sound hastes -> */
  { IDC_LBL_TIME_SHIFT_PLUS, N_("IDC_LBL_TIME_SHIFT_PLUS"), "sound hastes ->", "" },
  { IDC_SLI_TIME_SHIFT, "IDC_SLI_TIME_SHIFT", "", "" },

  // Localization
  /* TRANSLATORS: Localization */
  { IDC_GRP_TRANS, N_("IDC_GRP_TRANS"), "Localization", "" },
  /* TRANSLATORS: Language: */
  { IDC_LBL_LANG, N_("IDC_LBL_LANG"), "Language:", "" },
  /* TRANSLATORS: How to translate?|http://ac3filter.net/guides/how_to_translate */
  { IDC_LNK_TRANSLATE, N_("IDC_LNK_TRANSLATE"), "How to translate?|http://ac3filter.net/guides/how_to_translate", "" },
};

#endif
