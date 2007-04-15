// File is generated by build_controls script from resource script.
// (see comments at the script)

#ifndef DIALOG_CONTROLS_H
#define DIALOG_CONTROLS_H

struct ControlDesc
{
  int id;
  const char *label;
  const char *tip;
  const char *transid;
  const char *tipid;
};

// Total groups: 32
// Total controls: 227
static const ControlDesc dialog_controls[] =
{
  // Controls without a group
  { IDC_LNK_DONATE, "DONATE|http://order.kagi.com/?6CZJZ", "", "IDC_LNK_DONATE", "IDC_LNK_DONATE_TIP" },
  { IDC_VER, "AC3Filter ver. %s Copyright (c) 2002-2007 by Alexander Vigovsky", "", "IDC_VER", "IDC_VER_TIP" },

  // What is it?
  { IDC_GRP_ABOUT, "What is it?", "", "IDC_GRP_ABOUT", "IDC_GRP_ABOUT_TIP" },
  { IDC_LBL_ABOUT, "AC3Filter is high quality DirectShow audio decoder and processor filter used to playback multimedia files. Used automatically by most of multimedia players. Required to playback AVI files with AC3 or DTS audio tracks. Also can be used to playback DVD.", "", "IDC_LBL_ABOUT", "IDC_LBL_ABOUT_TIP" },

  // AGC
  { IDC_GRP_AGC, "AGC", "", "IDC_GRP_AGC", "IDC_GRP_AGC_TIP" },
  { IDC_EDT_ATTACK, "", "", "IDC_EDT_ATTACK", "IDC_EDT_ATTACK_TIP" },
  { IDC_EDT_RELEASE, "", "", "IDC_EDT_RELEASE", "IDC_EDT_RELEASE_TIP" },
  { IDC_LBL_ATTACK_RELEASE, "Attack/release speed (dB/s):", "", "IDC_LBL_ATTACK_RELEASE", "IDC_LBL_ATTACK_RELEASE_TIP" },

  // Contact author
  { IDC_GRP_CONTACT, "Contact author", "", "IDC_GRP_CONTACT", "IDC_GRP_CONTACT_TIP" },
  { IDC_LBL_CONTACT, "Please report about all bugs. Feel free to email author with your ideas, criticism, etc. Please write in English or Russian only. Subject should contain 'AC3Filter' word (due to automatic filtering).", "", "IDC_LBL_CONTACT", "IDC_LBL_CONTACT_TIP" },
  { IDC_LNK_EMAIL, "mail to author|mailto:xvalex@mail.ru?Subject=AC3Filter", "", "IDC_LNK_EMAIL", "IDC_LNK_EMAIL_TIP" },
  { IDC_LNK_FORUM, "Project forum|http://ac3filter.net/forum/", "", "IDC_LNK_FORUM", "IDC_LNK_FORUM_TIP" },
  { IDC_LNK_HOME, "Homepage|http://ac3filter.net/", "", "IDC_LNK_HOME", "IDC_LNK_HOME_TIP" },

  // CPU
  { IDC_GRP_CPU, "CPU", "", "IDC_GRP_CPU", "IDC_GRP_CPU_TIP" },
  { IDC_CPU, "", "", "IDC_CPU", "IDC_CPU_TIP" },
  { IDC_CPU_LABEL, "0%", "", "IDC_CPU_LABEL", "IDC_CPU_LABEL_TIP" },

  // Thanks to
  { IDC_GRP_CREDITS, "Thanks to", "", "IDC_GRP_CREDITS", "IDC_GRP_CREDITS_TIP" },
  { IDC_EDT_CREDITS, "", "", "IDC_EDT_CREDITS", "IDC_EDT_CREDITS_TIP" },

  // Decoder info
  { IDC_GRP_DECODER_INFO, "Decoder info", "", "IDC_GRP_DECODER_INFO", "IDC_GRP_DECODER_INFO_TIP" },
  { IDC_EDT_ERRORS, "", "", "IDC_EDT_ERRORS", "IDC_EDT_ERRORS_TIP" },
  { IDC_EDT_FRAMES, "", "", "IDC_EDT_FRAMES", "IDC_EDT_FRAMES_TIP" },
  { IDC_EDT_INFO, "", "", "IDC_EDT_INFO", "IDC_EDT_INFO_TIP" },
  { IDC_LBL_FRAMES_ERRORS, "Frames / Errors", "", "IDC_LBL_FRAMES_ERRORS", "IDC_LBL_FRAMES_ERRORS_TIP" },

  // Delays
  { IDC_GRP_DELAYS, "Delays", "", "IDC_GRP_DELAYS", "IDC_GRP_DELAYS_TIP" },
  { IDC_CHK_DELAYS, "Enable", "", "IDC_CHK_DELAYS", "IDC_CHK_DELAYS_TIP" },
  { IDC_CMB_UNITS, "", "", "IDC_CMB_UNITS", "IDC_CMB_UNITS_TIP" },
  { IDC_EDT_DC, "", "", "IDC_EDT_DC", "IDC_EDT_DC_TIP" },
  { IDC_EDT_DL, "", "", "IDC_EDT_DL", "IDC_EDT_DL_TIP" },
  { IDC_EDT_DLFE, "", "", "IDC_EDT_DLFE", "IDC_EDT_DLFE_TIP" },
  { IDC_EDT_DR, "", "", "IDC_EDT_DR", "IDC_EDT_DR_TIP" },
  { IDC_EDT_DSL, "", "", "IDC_EDT_DSL", "IDC_EDT_DSL_TIP" },
  { IDC_EDT_DSR, "", "", "IDC_EDT_DSR", "IDC_EDT_DSR_TIP" },
  { IDC_LBL_UNITS, "Units:", "", "IDC_LBL_UNITS", "IDC_LBL_UNITS_TIP" },

  // DRC
  { IDC_GRP_DRC, "DRC", "", "IDC_GRP_DRC", "IDC_GRP_DRC_TIP" },
  { IDC_CHK_DRC, "Enable", "", "IDC_CHK_DRC", "IDC_CHK_DRC_TIP" },
  { IDC_EDT_DRC_LEVEL, "", "", "IDC_EDT_DRC_LEVEL", "IDC_EDT_DRC_LEVEL_TIP" },
  { IDC_EDT_DRC_POWER, "", "", "IDC_EDT_DRC_POWER", "IDC_EDT_DRC_POWER_TIP" },
  { IDC_SLI_DRC_LEVEL, "", "", "IDC_SLI_DRC_LEVEL", "IDC_SLI_DRC_LEVEL_TIP" },
  { IDC_SLI_DRC_POWER, "", "", "IDC_SLI_DRC_POWER", "IDC_SLI_DRC_POWER_TIP" },

  // DirectShow options
  { IDC_GRP_DSHOW, "DirectShow options", "", "IDC_GRP_DSHOW", "IDC_GRP_DSHOW_TIP" },
  { IDC_CHK_QUERY_SINK, "Check output format support", "", "IDC_CHK_QUERY_SINK", "IDC_CHK_QUERY_SINK_TIP" },
  { IDC_CHK_REINIT, "Force sound card to reinit after seek / pause", "", "IDC_CHK_REINIT", "IDC_CHK_REINIT_TIP" },
  { IDC_CHK_SPDIF_NO_PCM, "Disallow PCM output in SPDIF mode", "", "IDC_CHK_SPDIF_NO_PCM", "IDC_CHK_SPDIF_NO_PCM_TIP" },

  // SPDIF/DTS conversion
  { IDC_GRP_DTS_CONV, "SPDIF/DTS conversion", "", "IDC_GRP_DTS_CONV", "IDC_GRP_DTS_CONV_TIP" },
  { IDC_RBT_DTS_CONV_14BIT, "Convert to DTS14", "", "IDC_RBT_DTS_CONV_14BIT", "IDC_RBT_DTS_CONV_14BIT_TIP" },
  { IDC_RBT_DTS_CONV_16BIT, "Convert to DTS16", "", "IDC_RBT_DTS_CONV_16BIT", "IDC_RBT_DTS_CONV_16BIT_TIP" },
  { IDC_RBT_DTS_CONV_NONE, "Do not convert", "", "IDC_RBT_DTS_CONV_NONE", "IDC_RBT_DTS_CONV_NONE_TIP" },

  // SPDIF/DTS mode
  { IDC_GRP_DTS_MODE, "SPDIF/DTS mode", "", "IDC_GRP_DTS_MODE", "IDC_GRP_DTS_MODE_TIP" },
  { IDC_RBT_DTS_MODE_AUTO, "Auto", "", "IDC_RBT_DTS_MODE_AUTO", "IDC_RBT_DTS_MODE_AUTO_TIP" },
  { IDC_RBT_DTS_MODE_PADDED, "Padded DTS", "", "IDC_RBT_DTS_MODE_PADDED", "IDC_RBT_DTS_MODE_PADDED_TIP" },
  { IDC_RBT_DTS_MODE_WRAPPED, "SPDIF wrapped", "", "IDC_RBT_DTS_MODE_WRAPPED", "IDC_RBT_DTS_MODE_WRAPPED_TIP" },

  // Build info
  { IDC_GRP_ENV, "Build info", "", "IDC_GRP_ENV", "IDC_GRP_ENV_TIP" },
  { IDC_EDT_ENV, "", "", "IDC_EDT_ENV", "IDC_EDT_ENV_TIP" },

  // Use AC3Filter for ..
  { IDC_GRP_FORMATS, "Use AC3Filter for ..", "", "IDC_GRP_FORMATS", "IDC_GRP_FORMATS_TIP" },
  { IDC_CHK_AC3, "AC3", "", "IDC_CHK_AC3", "IDC_CHK_AC3_TIP" },
  { IDC_CHK_DTS, "DTS", "", "IDC_CHK_DTS", "IDC_CHK_DTS_TIP" },
  { IDC_CHK_MPA, "MPEG Audio", "", "IDC_CHK_MPA", "IDC_CHK_MPA_TIP" },
  { IDC_CHK_PCM, "PCM", "", "IDC_CHK_PCM", "IDC_CHK_PCM_TIP" },
  { IDC_CHK_PES, "DVD", "", "IDC_CHK_PES", "IDC_CHK_PES_TIP" },
  { IDC_CHK_SPDIF, "SPDIF", "", "IDC_CHK_SPDIF", "IDC_CHK_SPDIF_TIP" },

  // Gain
  { IDC_GRP_GAIN, "Gain", "", "IDC_GRP_GAIN", "IDC_GRP_GAIN_TIP" },
  { IDC_EDT_GAIN, "", "", "IDC_EDT_GAIN", "IDC_EDT_GAIN_TIP" },
  { IDC_EDT_MASTER, "", "", "IDC_EDT_MASTER", "IDC_EDT_MASTER_TIP" },
  { IDC_LBL_GAIN, "Gain", "", "IDC_LBL_GAIN", "IDC_LBL_GAIN_TIP" },
  { IDC_LBL_MASTER, "Master", "", "IDC_LBL_MASTER", "IDC_LBL_MASTER_TIP" },
  { IDC_SLI_GAIN, "", "", "IDC_SLI_GAIN", "IDC_SLI_GAIN_TIP" },
  { IDC_SLI_MASTER, "", "", "IDC_SLI_MASTER", "IDC_SLI_MASTER_TIP" },

  // Gains
  { IDC_GRP_GAINS, "Gains", "", "IDC_GRP_GAINS", "IDC_GRP_GAINS_TIP" },
  { IDC_EDT_LFE, "", "", "IDC_EDT_LFE", "IDC_EDT_LFE_TIP" },
  { IDC_EDT_SUR, "", "", "IDC_EDT_SUR", "IDC_EDT_SUR_TIP" },
  { IDC_EDT_VOICE, "", "", "IDC_EDT_VOICE", "IDC_EDT_VOICE_TIP" },
  { IDC_LBL_LFE, "LFE", "", "IDC_LBL_LFE", "IDC_LBL_LFE_TIP" },
  { IDC_LBL_SUR, "Surround", "", "IDC_LBL_SUR", "IDC_LBL_SUR_TIP" },
  { IDC_LBL_VOICE, "Voice", "", "IDC_LBL_VOICE", "IDC_LBL_VOICE_TIP" },
  { IDC_SLI_LFE, "", "", "IDC_SLI_LFE", "IDC_SLI_LFE_TIP" },
  { IDC_SLI_SUR, "", "", "IDC_SLI_SUR", "IDC_SLI_SUR_TIP" },
  { IDC_SLI_VOICE, "", "", "IDC_SLI_VOICE", "IDC_SLI_VOICE_TIP" },

  // Input gains
  { IDC_GRP_INPUT_GAINS, "Input gains", "", "IDC_GRP_INPUT_GAINS", "IDC_GRP_INPUT_GAINS_TIP" },
  { IDC_EDT_IN_C, "", "", "IDC_EDT_IN_C", "IDC_EDT_IN_C_TIP" },
  { IDC_EDT_IN_L, "", "", "IDC_EDT_IN_L", "IDC_EDT_IN_L_TIP" },
  { IDC_EDT_IN_LFE, "", "", "IDC_EDT_IN_LFE", "IDC_EDT_IN_LFE_TIP" },
  { IDC_EDT_IN_R, "", "", "IDC_EDT_IN_R", "IDC_EDT_IN_R_TIP" },
  { IDC_EDT_IN_SL, "", "", "IDC_EDT_IN_SL", "IDC_EDT_IN_SL_TIP" },
  { IDC_EDT_IN_SR, "", "", "IDC_EDT_IN_SR", "IDC_EDT_IN_SR_TIP" },
  { IDC_SLI_IN_C, "", "", "IDC_SLI_IN_C", "IDC_SLI_IN_C_TIP" },
  { IDC_SLI_IN_L, "", "", "IDC_SLI_IN_L", "IDC_SLI_IN_L_TIP" },
  { IDC_SLI_IN_LFE, "", "", "IDC_SLI_IN_LFE", "IDC_SLI_IN_LFE_TIP" },
  { IDC_SLI_IN_R, "", "", "IDC_SLI_IN_R", "IDC_SLI_IN_R_TIP" },
  { IDC_SLI_IN_SL, "", "", "IDC_SLI_IN_SL", "IDC_SLI_IN_SL_TIP" },
  { IDC_SLI_IN_SR, "", "", "IDC_SLI_IN_SR", "IDC_SLI_IN_SR_TIP" },

  // Input levels
  { IDC_GRP_INPUT_LEVELS, "Input levels", "", "IDC_GRP_INPUT_LEVELS", "IDC_GRP_INPUT_LEVELS_TIP" },
  { IDC_IN_C, "", "", "IDC_IN_C", "IDC_IN_C_TIP" },
  { IDC_IN_L, "", "", "IDC_IN_L", "IDC_IN_L_TIP" },
  { IDC_IN_LFE, "", "", "IDC_IN_LFE", "IDC_IN_LFE_TIP" },
  { IDC_IN_R, "", "", "IDC_IN_R", "IDC_IN_R_TIP" },
  { IDC_IN_SL, "", "", "IDC_IN_SL", "IDC_IN_SL_TIP" },
  { IDC_IN_SR, "", "", "IDC_IN_SR", "IDC_IN_SR_TIP" },
  { IDC_LBL_IN_C, "C", "", "IDC_LBL_IN_C", "IDC_LBL_IN_C_TIP" },
  { IDC_LBL_IN_L, "L", "", "IDC_LBL_IN_L", "IDC_LBL_IN_L_TIP" },
  { IDC_LBL_IN_LFE, "LFE", "", "IDC_LBL_IN_LFE", "IDC_LBL_IN_LFE_TIP" },
  { IDC_LBL_IN_R, "R", "", "IDC_LBL_IN_R", "IDC_LBL_IN_R_TIP" },
  { IDC_LBL_IN_SL, "SL", "", "IDC_LBL_IN_SL", "IDC_LBL_IN_SL_TIP" },
  { IDC_LBL_IN_SR, "SR", "", "IDC_LBL_IN_SR", "IDC_LBL_IN_SR_TIP" },

  // Interface options
  { IDC_GRP_INTERFACE, "Interface options", "", "IDC_GRP_INTERFACE", "IDC_GRP_INTERFACE_TIP" },
  { IDC_CHK_INVERT_LEVELS, "Invert levels", "", "IDC_CHK_INVERT_LEVELS", "IDC_CHK_INVERT_LEVELS_TIP" },
  { IDC_CHK_TOOLTIPS, "Show tooltips", "", "IDC_CHK_TOOLTIPS", "IDC_CHK_TOOLTIPS_TIP" },
  { IDC_CHK_TRAY, "Show tray icon", "", "IDC_CHK_TRAY", "IDC_CHK_TRAY_TIP" },
  { IDC_EDT_REFRESH_TIME, "", "", "IDC_EDT_REFRESH_TIME", "IDC_EDT_REFRESH_TIME_TIP" },
  { IDC_LBL_REFRESH_TIME, "Interface update rate (ms)", "", "IDC_LBL_REFRESH_TIME", "IDC_LBL_REFRESH_TIME_TIP" },

  // License
  { IDC_GRP_LICENSE, "License", "", "IDC_GRP_LICENSE", "IDC_GRP_LICENSE_TIP" },
  { IDC_LBL_LICENSE, "This program is free software and can be distributed according to the terms of GNU General Public License version 2.", "", "IDC_LBL_LICENSE", "IDC_LBL_LICENSE_TIP" },

  // Matrix
  { IDC_GRP_MATRIX, "Matrix", "", "IDC_GRP_MATRIX", "IDC_GRP_MATRIX_TIP" },
  { IDC_EDT_C_C, "", "", "IDC_EDT_C_C", "IDC_EDT_C_C_TIP" },
  { IDC_EDT_C_L, "", "", "IDC_EDT_C_L", "IDC_EDT_C_L_TIP" },
  { IDC_EDT_C_LFE, "", "", "IDC_EDT_C_LFE", "IDC_EDT_C_LFE_TIP" },
  { IDC_EDT_C_R, "", "", "IDC_EDT_C_R", "IDC_EDT_C_R_TIP" },
  { IDC_EDT_C_SL, "", "", "IDC_EDT_C_SL", "IDC_EDT_C_SL_TIP" },
  { IDC_EDT_C_SR, "", "", "IDC_EDT_C_SR", "IDC_EDT_C_SR_TIP" },
  { IDC_EDT_LFE_C, "", "", "IDC_EDT_LFE_C", "IDC_EDT_LFE_C_TIP" },
  { IDC_EDT_LFE_L, "", "", "IDC_EDT_LFE_L", "IDC_EDT_LFE_L_TIP" },
  { IDC_EDT_LFE_LFE, "", "", "IDC_EDT_LFE_LFE", "IDC_EDT_LFE_LFE_TIP" },
  { IDC_EDT_LFE_R, "", "", "IDC_EDT_LFE_R", "IDC_EDT_LFE_R_TIP" },
  { IDC_EDT_LFE_SL, "", "", "IDC_EDT_LFE_SL", "IDC_EDT_LFE_SL_TIP" },
  { IDC_EDT_LFE_SR, "", "", "IDC_EDT_LFE_SR", "IDC_EDT_LFE_SR_TIP" },
  { IDC_EDT_L_C, "", "", "IDC_EDT_L_C", "IDC_EDT_L_C_TIP" },
  { IDC_EDT_L_L, "", "", "IDC_EDT_L_L", "IDC_EDT_L_L_TIP" },
  { IDC_EDT_L_LFE, "", "", "IDC_EDT_L_LFE", "IDC_EDT_L_LFE_TIP" },
  { IDC_EDT_L_R, "", "", "IDC_EDT_L_R", "IDC_EDT_L_R_TIP" },
  { IDC_EDT_L_SL, "", "", "IDC_EDT_L_SL", "IDC_EDT_L_SL_TIP" },
  { IDC_EDT_L_SR, "", "", "IDC_EDT_L_SR", "IDC_EDT_L_SR_TIP" },
  { IDC_EDT_R_C, "", "", "IDC_EDT_R_C", "IDC_EDT_R_C_TIP" },
  { IDC_EDT_R_L, "", "", "IDC_EDT_R_L", "IDC_EDT_R_L_TIP" },
  { IDC_EDT_R_LFE, "", "", "IDC_EDT_R_LFE", "IDC_EDT_R_LFE_TIP" },
  { IDC_EDT_R_R, "", "", "IDC_EDT_R_R", "IDC_EDT_R_R_TIP" },
  { IDC_EDT_R_SL, "", "", "IDC_EDT_R_SL", "IDC_EDT_R_SL_TIP" },
  { IDC_EDT_R_SR, "", "", "IDC_EDT_R_SR", "IDC_EDT_R_SR_TIP" },
  { IDC_EDT_SL_C, "", "", "IDC_EDT_SL_C", "IDC_EDT_SL_C_TIP" },
  { IDC_EDT_SL_L, "", "", "IDC_EDT_SL_L", "IDC_EDT_SL_L_TIP" },
  { IDC_EDT_SL_LFE, "", "", "IDC_EDT_SL_LFE", "IDC_EDT_SL_LFE_TIP" },
  { IDC_EDT_SL_R, "", "", "IDC_EDT_SL_R", "IDC_EDT_SL_R_TIP" },
  { IDC_EDT_SL_SL, "", "", "IDC_EDT_SL_SL", "IDC_EDT_SL_SL_TIP" },
  { IDC_EDT_SL_SR, "", "", "IDC_EDT_SL_SR", "IDC_EDT_SL_SR_TIP" },
  { IDC_EDT_SR_C, "", "", "IDC_EDT_SR_C", "IDC_EDT_SR_C_TIP" },
  { IDC_EDT_SR_L, "", "", "IDC_EDT_SR_L", "IDC_EDT_SR_L_TIP" },
  { IDC_EDT_SR_LFE, "", "", "IDC_EDT_SR_LFE", "IDC_EDT_SR_LFE_TIP" },
  { IDC_EDT_SR_R, "", "", "IDC_EDT_SR_R", "IDC_EDT_SR_R_TIP" },
  { IDC_EDT_SR_SL, "", "", "IDC_EDT_SR_SL", "IDC_EDT_SR_SL_TIP" },
  { IDC_EDT_SR_SR, "", "", "IDC_EDT_SR_SR", "IDC_EDT_SR_SR_TIP" },

  // Matrix preset
  { IDC_GRP_MATRIX_PRESET, "Matrix preset", "", "IDC_GRP_MATRIX_PRESET", "IDC_GRP_MATRIX_PRESET_TIP" },
  { IDC_BTN_MATRIX_DELETE, "Delete", "", "IDC_BTN_MATRIX_DELETE", "IDC_BTN_MATRIX_DELETE_TIP" },
  { IDC_BTN_MATRIX_SAVE, "Save", "", "IDC_BTN_MATRIX_SAVE", "IDC_BTN_MATRIX_SAVE_TIP" },
  { IDC_CMB_MATRIX_PRESET, "", "", "IDC_CMB_MATRIX_PRESET", "IDC_CMB_MATRIX_PRESET_TIP" },

  // Filter merit
  { IDC_GRP_MERIT, "Filter merit", "", "IDC_GRP_MERIT", "IDC_GRP_MERIT_TIP" },
  { IDC_RBT_MERIT_PREFERRED, "Prefer AC3Filter", "", "IDC_RBT_MERIT_PREFERRED", "IDC_RBT_MERIT_PREFERRED_TIP" },
  { IDC_RBT_MERIT_UNLIKELY, "Prefer other decoder", "", "IDC_RBT_MERIT_UNLIKELY", "IDC_RBT_MERIT_UNLIKELY_TIP" },

  // Options
  { IDC_GRP_MIXER_OPTIONS, "Options", "", "IDC_GRP_MIXER_OPTIONS", "IDC_GRP_MIXER_OPTIONS_TIP" },
  { IDC_CHK_AUTO_GAIN, "Auto gain control", "", "IDC_CHK_AUTO_GAIN", "IDC_CHK_AUTO_GAIN_TIP" },
  { IDC_CHK_AUTO_MATRIX, "Auto matrix", "", "IDC_CHK_AUTO_MATRIX", "IDC_CHK_AUTO_MATRIX_TIP" },
  { IDC_CHK_BASS_REDIR, "Bass redir:", "", "IDC_CHK_BASS_REDIR", "IDC_CHK_BASS_REDIR_TIP" },
  { IDC_CHK_EXPAND_STEREO, "Expand stereo", "", "IDC_CHK_EXPAND_STEREO", "IDC_CHK_EXPAND_STEREO_TIP" },
  { IDC_CHK_NORMALIZE, "One-pass norm", "", "IDC_CHK_NORMALIZE", "IDC_CHK_NORMALIZE_TIP" },
  { IDC_CHK_NORM_MATRIX, "Normalize matrix", "", "IDC_CHK_NORM_MATRIX", "IDC_CHK_NORM_MATRIX_TIP" },
  { IDC_CHK_VOICE_CONTROL, "Voice control", "", "IDC_CHK_VOICE_CONTROL", "IDC_CHK_VOICE_CONTROL_TIP" },
  { IDC_EDT_BASS_FREQ, "", "", "IDC_EDT_BASS_FREQ", "IDC_EDT_BASS_FREQ_TIP" },

  // Output format
  { IDC_GRP_OUTPUT, "Output format", "", "IDC_GRP_OUTPUT", "IDC_GRP_OUTPUT_TIP" },
  { IDC_CHK_USE_SPDIF, "Use SPDIF", "", "IDC_CHK_USE_SPDIF", "IDC_CHK_USE_SPDIF_TIP" },
  { IDC_CMB_FORMAT, "", "", "IDC_CMB_FORMAT", "IDC_CMB_FORMAT_TIP" },
  { IDC_CMB_SPK, "", "", "IDC_CMB_SPK", "IDC_CMB_SPK_TIP" },
  { IDC_LBL_INPUT, "input config", "", "IDC_LBL_INPUT", "IDC_LBL_INPUT_TIP" },

  // Output gains
  { IDC_GRP_OUTPUT_GAINS, "Output gains", "", "IDC_GRP_OUTPUT_GAINS", "IDC_GRP_OUTPUT_GAINS_TIP" },
  { IDC_EDT_OUT_C, "", "", "IDC_EDT_OUT_C", "IDC_EDT_OUT_C_TIP" },
  { IDC_EDT_OUT_L, "", "", "IDC_EDT_OUT_L", "IDC_EDT_OUT_L_TIP" },
  { IDC_EDT_OUT_LFE, "", "", "IDC_EDT_OUT_LFE", "IDC_EDT_OUT_LFE_TIP" },
  { IDC_EDT_OUT_R, "", "", "IDC_EDT_OUT_R", "IDC_EDT_OUT_R_TIP" },
  { IDC_EDT_OUT_SL, "", "", "IDC_EDT_OUT_SL", "IDC_EDT_OUT_SL_TIP" },
  { IDC_EDT_OUT_SR, "", "", "IDC_EDT_OUT_SR", "IDC_EDT_OUT_SR_TIP" },
  { IDC_SLI_OUT_C, "", "", "IDC_SLI_OUT_C", "IDC_SLI_OUT_C_TIP" },
  { IDC_SLI_OUT_L, "", "", "IDC_SLI_OUT_L", "IDC_SLI_OUT_L_TIP" },
  { IDC_SLI_OUT_LFE, "", "", "IDC_SLI_OUT_LFE", "IDC_SLI_OUT_LFE_TIP" },
  { IDC_SLI_OUT_R, "", "", "IDC_SLI_OUT_R", "IDC_SLI_OUT_R_TIP" },
  { IDC_SLI_OUT_SL, "", "", "IDC_SLI_OUT_SL", "IDC_SLI_OUT_SL_TIP" },
  { IDC_SLI_OUT_SR, "", "", "IDC_SLI_OUT_SR", "IDC_SLI_OUT_SR_TIP" },

  // Output levels
  { IDC_GRP_OUTPUT_LEVELS, "Output levels", "", "IDC_GRP_OUTPUT_LEVELS", "IDC_GRP_OUTPUT_LEVELS_TIP" },
  { IDC_LBL_OUT_C, "C", "", "IDC_LBL_OUT_C", "IDC_LBL_OUT_C_TIP" },
  { IDC_LBL_OUT_L, "L", "", "IDC_LBL_OUT_L", "IDC_LBL_OUT_L_TIP" },
  { IDC_LBL_OUT_R, "R", "", "IDC_LBL_OUT_R", "IDC_LBL_OUT_R_TIP" },
  { IDC_LBL_OUT_SL, "SL", "", "IDC_LBL_OUT_SL", "IDC_LBL_OUT_SL_TIP" },
  { IDC_LBL_OUT_SR, "SR", "", "IDC_LBL_OUT_SR", "IDC_LBL_OUT_SR_TIP" },
  { IDC_LBL_OUT_SW, "SW", "", "IDC_LBL_OUT_SW", "IDC_LBL_OUT_SW_TIP" },
  { IDC_OUT_C, "", "", "IDC_OUT_C", "IDC_OUT_C_TIP" },
  { IDC_OUT_L, "", "", "IDC_OUT_L", "IDC_OUT_L_TIP" },
  { IDC_OUT_R, "", "", "IDC_OUT_R", "IDC_OUT_R_TIP" },
  { IDC_OUT_SL, "", "", "IDC_OUT_SL", "IDC_OUT_SL_TIP" },
  { IDC_OUT_SR, "", "", "IDC_OUT_SR", "IDC_OUT_SR_TIP" },
  { IDC_OUT_SW, "", "", "IDC_OUT_SW", "IDC_OUT_SW_TIP" },

  // Preset
  { IDC_GRP_PRESET, "Preset", "", "IDC_GRP_PRESET", "IDC_GRP_PRESET_TIP" },
  { IDC_BTN_PRESET_DELETE, "Delete", "", "IDC_BTN_PRESET_DELETE", "IDC_BTN_PRESET_DELETE_TIP" },
  { IDC_BTN_PRESET_FILE, "File", "", "IDC_BTN_PRESET_FILE", "IDC_BTN_PRESET_FILE_TIP" },
  { IDC_BTN_PRESET_SAVE, "Save", "", "IDC_BTN_PRESET_SAVE", "IDC_BTN_PRESET_SAVE_TIP" },
  { IDC_CMB_PRESET, "", "", "IDC_CMB_PRESET", "IDC_CMB_PRESET_TIP" },

  // Default audio renderer
  { IDC_GRP_RENDERER, "Default audio renderer", "", "IDC_GRP_RENDERER", "IDC_GRP_RENDERER_TIP" },
  { IDC_RBT_RENDER_DS, "Use Direct Sound by default", "", "IDC_RBT_RENDER_DS", "IDC_RBT_RENDER_DS_TIP" },
  { IDC_RBT_RENDER_WO, "Use Wave Out by default", "", "IDC_RBT_RENDER_WO", "IDC_RBT_RENDER_WO_TIP" },

  // SPDIF options
  { IDC_GRP_SPDIF, "SPDIF options", "", "IDC_GRP_SPDIF", "IDC_GRP_SPDIF_TIP" },
  { IDC_CHK_SPDIF_ALLOW_32, "32kHz", "", "IDC_CHK_SPDIF_ALLOW_32", "IDC_CHK_SPDIF_ALLOW_32_TIP" },
  { IDC_CHK_SPDIF_ALLOW_44, "44kHz", "", "IDC_CHK_SPDIF_ALLOW_44", "IDC_CHK_SPDIF_ALLOW_44_TIP" },
  { IDC_CHK_SPDIF_ALLOW_48, "48kHz", "", "IDC_CHK_SPDIF_ALLOW_48", "IDC_CHK_SPDIF_ALLOW_48_TIP" },
  { IDC_CHK_SPDIF_AS_PCM, "Output SPDIF as PCM", "", "IDC_CHK_SPDIF_AS_PCM", "IDC_CHK_SPDIF_AS_PCM_TIP" },
  { IDC_CHK_SPDIF_CHECK_SR, "Restrict SPDIF sample rate", "", "IDC_CHK_SPDIF_CHECK_SR", "IDC_CHK_SPDIF_CHECK_SR_TIP" },
  { IDC_CHK_SPDIF_ENCODE, "Use AC3 encoder", "", "IDC_CHK_SPDIF_ENCODE", "IDC_CHK_SPDIF_ENCODE_TIP" },
  { IDC_CHK_SPDIF_STEREO_PT, "Do not encode stereo PCM", "", "IDC_CHK_SPDIF_STEREO_PT", "IDC_CHK_SPDIF_STEREO_PT_TIP" },
  { IDC_CHK_USE_DETECTOR, "Detect SPDIF stream in PCM data", "", "IDC_CHK_USE_DETECTOR", "IDC_CHK_USE_DETECTOR_TIP" },

  // SPDIF passthrough
  { IDC_GRP_SPDIF_PT, "SPDIF passthrough", "", "IDC_GRP_SPDIF_PT", "IDC_GRP_SPDIF_PT_TIP" },
  { IDC_CHK_SPDIF_AC3, "AC3", "", "IDC_CHK_SPDIF_AC3", "IDC_CHK_SPDIF_AC3_TIP" },
  { IDC_CHK_SPDIF_DTS, "DTS", "", "IDC_CHK_SPDIF_DTS", "IDC_CHK_SPDIF_DTS_TIP" },
  { IDC_CHK_SPDIF_MPA, "MPEG Audio", "", "IDC_CHK_SPDIF_MPA", "IDC_CHK_SPDIF_MPA_TIP" },

  // Audio/Video sync
  { IDC_GRP_SYNC, "Audio/Video sync", "", "IDC_GRP_SYNC", "IDC_GRP_SYNC_TIP" },
  { IDC_CHK_JITTER, "Jitter correction.", "", "IDC_CHK_JITTER", "IDC_CHK_JITTER_TIP" },
  { IDC_EDT_JITTER, "", "", "IDC_EDT_JITTER", "IDC_EDT_JITTER_TIP" },
  { IDC_EDT_TIME_SHIFT, "", "", "IDC_EDT_TIME_SHIFT", "IDC_EDT_TIME_SHIFT_TIP" },
  { IDC_LBL_JITTER, "Current jitter:", "", "IDC_LBL_JITTER", "IDC_LBL_JITTER_TIP" },
  { IDC_LBL_TIME_SHIFT, "Time shift (ms):", "", "IDC_LBL_TIME_SHIFT", "IDC_LBL_TIME_SHIFT_TIP" },
  { IDC_SLI_TIME_SHIFT, "", "", "IDC_SLI_TIME_SHIFT", "IDC_SLI_TIME_SHIFT_TIP" },

  // Translation
  { IDC_GRP_TRANS, "Translation", "", "IDC_GRP_TRANS", "IDC_GRP_TRANS_TIP" },
  { IDC_CMB_LANG, "", "", "IDC_CMB_LANG", "IDC_CMB_LANG_TIP" },
  { IDC_EDT_TRANS_INFO, "", "", "IDC_EDT_TRANS_INFO", "IDC_EDT_TRANS_INFO_TIP" },
  { IDC_LBL_LANG, "Language:", "", "IDC_LBL_LANG", "IDC_LBL_LANG_TIP" },
};

#endif
