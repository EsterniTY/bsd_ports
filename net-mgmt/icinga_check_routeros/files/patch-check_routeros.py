--- check_routeros.py.orig	2022-10-25 14:24:38.000000000 +0300
+++ check_routeros.py	2023-10-03 11:11:53.187591000 +0300
@@ -1,4 +1,4 @@
-#!/usr/bin/env python3
+#!/usr/bin/env python3.9
 # SPDX-FileCopyrightText: PhiBo DinoTools (2021)
 # SPDX-License-Identifier: GPL-3.0-or-later
 from datetime import datetime
@@ -139,6 +139,8 @@
         metrics = []
         for metric_value in self._routeros_metric_values:
             if metric_value.get("missing_ok", False) and metric_value["name"] not in result:
+                continue
+            if metric_value["name"] not in result:
                 continue
             value = result[metric_value["name"]]
             if metric_value["type"] is not None:
