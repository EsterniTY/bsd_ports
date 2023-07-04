--- check_iftraffic/info.c.orig	2023-06-30 09:47:35.729589000 +0300
+++ check_iftraffic/info.c	2023-06-30 09:47:40.091402000 +0300
@@ -4,8 +4,8 @@
 #include "snmp.h"
 #include "check_iftraffic.h"
 
-struct opt_s options;
-struct host_settings_s host_settings;
+// struct opt_s options;
+// struct host_settings_s host_settings;
 
 void free_info(struct if_status_t *cell)
 {
