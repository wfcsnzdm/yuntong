<div class="post-2898 post type-post status-publish format-standard hentry category--">
                  <h3 class="news-title gap-f"> 
                  <a href="[field:arcurl/]">[field:title function='( strlen("@me")>43 ? cn_substr("@me",43)."..." :"@me")' /]</a> 
                  <span>[field:pubdate runphp='yes']
$aa=strftime('%m-%d',@me);
$ntime = time();
$tagtime = @me;
$day3 = 3600 * 24 * 3;
if($tagtime > $ntime-$day3) @me = "(new)";
else @me = $aa;
[/field:pubdate]    </span></h3>          
            </div>