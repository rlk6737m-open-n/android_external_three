/* Generated by ./xlat/gen.sh from ./xlat/mtd_file_mode_options.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat mtd_file_mode_options in mpers mode

#else

static
const struct xlat mtd_file_mode_options[] = {
 XLAT(MTD_FILE_MODE_NORMAL),
 XLAT(MTD_FILE_MODE_OTP_FACTORY),
 XLAT(MTD_FILE_MODE_OTP_USER),
 XLAT(MTD_FILE_MODE_RAW),
 XLAT_END
};

#endif /* !IN_MPERS */
