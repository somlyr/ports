--- src/controller.cpp
+++ src/controller.cpp
@@ -1275,9 +1275,10 @@ std::string controller::bookmark(const std::string& url, const std::string& titl
 	std::string bookmark_cmd = cfg.get_configvalue("bookmark-cmd");
 	bool is_interactive = cfg.get_configvalue_as_bool("bookmark-interactive");
 	if (bookmark_cmd.length() > 0) {
-		std::string cmdline = utils::strprintf("%s '%s' %s %s",
+		std::string cmdline = utils::strprintf("%s '%s' '%s' '%s'",
 		                                       bookmark_cmd.c_str(), utils::replace_all(url,"'", "%27").c_str(),
-		                                       stfl::quote(title).c_str(), stfl::quote(description).c_str());
+		                                       utils::replace_all(title,"'", "%27").c_str(),
+		                                       utils::replace_all(description,"'", "%27").c_str());
 
 		LOG(LOG_DEBUG, "controller::bookmark: cmd = %s", cmdline.c_str());
 