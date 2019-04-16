#
# Regular cron jobs for the rebuscalc package
#
0 4	* * *	root	[ -x /usr/bin/rebuscalc_maintenance ] && /usr/bin/rebuscalc_maintenance
