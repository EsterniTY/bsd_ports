--- check_iftraffic/if_status.c.orig	2023-06-30 09:47:27.105885000 +0300
+++ check_iftraffic/if_status.c	2023-06-30 09:47:29.907997000 +0300
@@ -3,7 +3,7 @@
 
 #define DELTA(a, b) ((a)>(b) ? (OCTET_MAX_VALUE-a+b) : (b-a))
 
-struct opt_s options;
+// struct opt_s options;
 
 void set_delta(struct delta_t *delta,
                struct if_status_t *old,
