/* Generated by ./xlat/gen.sh from ./xlat/cap_mask1.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat cap_mask1 in mpers mode

#else

static
const struct xlat cap_mask1[] = {
 { 1<<CAP_MAC_OVERRIDE, "CAP_MAC_OVERRIDE" },
 { 1<<CAP_MAC_ADMIN, "CAP_MAC_ADMIN" },
 { 1<<CAP_SYSLOG, "CAP_SYSLOG" },
 { 1<<CAP_WAKE_ALARM, "CAP_WAKE_ALARM" },
 { 1<<CAP_BLOCK_SUSPEND, "CAP_BLOCK_SUSPEND" },
 { 1<<CAP_AUDIT_READ, "CAP_AUDIT_READ" },
 XLAT_END
};

#endif /* !IN_MPERS */