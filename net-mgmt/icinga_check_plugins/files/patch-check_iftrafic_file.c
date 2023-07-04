--- check_iftraffic/file.c.orig	2023-06-30 09:47:15.083110000 +0300
+++ check_iftraffic/file.c	2023-06-30 09:47:19.991091000 +0300
@@ -5,8 +5,8 @@
 #include "info.h"
 #include "file.h"
 
-struct opt_s options;
-struct host_settings_s host_settings;
+// struct opt_s options;
+// struct host_settings_s host_settings;
 
 size_t fw(const void *ptr, const size_t size, FILE *fp)
 {
