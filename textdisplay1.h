#ifndef header_h
#define header_h
 
String file1=
"<!DOCTYPE html>\r\n"
"<html lang=\"en\">\r\n"
"    <head>\r\n"
"        <meta charset=\"utf-8\">\r\n"
"        <title>POV Display</title>\r\n"
"        <script>\r\n"
"\r\n"
"        strLine1 = \"\";\r\n"
"        strLine2 = \"\";\r\n\r\n"
"        strLine3 = \"\";\r\n"
"        strLine4 = \"\";\r\n\r\n"
"        \r\n"       
"        function SendText()\r\n"
"        {\r\n"
"            var request = new XMLHttpRequest();\r\n"
"            \r\n"
"            strLine1 = document.getElementById(\"txt_form\").line.value;\r\n"
"            strLine2 = document.getElementById(\"txt_form\").quantity.value;\r\n"
"            \r\n"
"            strLine3 = document.getElementById(\"txt_form\").f1.value;\r\n"
"            strLine4 = document.getElementById(\"txt_form\").f2.value;\r\n"
"            \r\n"
"            request.open(\"GET\", \"text/\" + strLine1 +\"/\"+ strLine2 + \"/\"+ strLine3 + \"/\"+ strLine4 + \"/\", true);\r\n"
"            request.send(null);\r\n"
"        }\r\n"
"        </script>\r\n"
"    </head>\r\n"
"\r\n"
"    <body \">\r\n"
"<div id=title>"
"<h1 align=center>FEATURES DEVELOPMENT FOR ENERGY EFFICIENT FAN</H1>"
"  </div>"
"  <br/>"
"  <div class=defaultText>"
"    <h2 align=center>POV DISPLAY</H2>"
"        <p><b>Enter the fields:</b></p>\r\n"
"        <form id=\"txt_form\" name=\"frmText\">\r\n"
"            <label>Text to Display: <input type=\"text\" name=\"line\" size=\"60\" maxlength=\"60\" /></label>\r\n"
"            <label>Font size: <input type=\"number\" name=\"quantity\" size=\"60\" maxlength=\"60\" /></label>\r\n"
"            <label>F1(Text): <input type=\"text\" name=\"f1\" size=\"60\" maxlength=\"60\" /></label>\r\n"
"            <label>F2(Number): <input type=\"number\" name=\"f2\" size=\"60\" maxlength=\"60\" /></label>\r\n"
"         </form>\r\n"
"        <br />\r\n"
"        <input type=\"submit\" value=\"Send\" onclick=\"SendText()\" />\r\n"
"\r\n"
"</html>\r\n";
 
#endif