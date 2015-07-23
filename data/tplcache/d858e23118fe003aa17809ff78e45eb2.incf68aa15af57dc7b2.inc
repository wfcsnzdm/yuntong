<?php
$z[0]=Array("arcurl","",166,181);
$z[1]=Array("title","",183,264);
$z[1][4]['function']="( strlen(\"@me\")>43 ? cn_substr(\"@me\",43).\"...\" :\"@me\")";
$z[2]=Array("pubdate","\r\n\$aa=strftime('%m-%d',@me);\r\n\$ntime = time();\r\n\$tagtime = @me;\r\n\$day3 = 3600 * 24 * 7;\r\nif(\$tagtime > \$ntime-\$day3) @me = \"mon/wp-content/themes/1/images/new.gif\";\r\nelse @me = \$aa;\r\n",295,522);
$z[2][4]['runphp']="yes";

?>