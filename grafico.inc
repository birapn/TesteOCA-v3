<?php

$apx = ($a + 100)*1.5;
$bpx = ($b + 100)*1.5;
$cpx = ($c + 100)*1.5;
$dpx = ($d + 100)*1.5;
$epx = ($e + 100)*1.5;
$fpx = ($f + 100)*1.5;
$gpx = ($g + 100)*1.5;
$hpx = ($h + 100)*1.5;
$ipx = ($i + 100)*1.5;
$jpx = ($j + 100)*1.5;

if ($r22 =='+'){
$bmanic = "S";
$bwavy = "redbar.gif";
}else {
$bmanic = "N";
$ewavy = "bar.gif";
}

if ($r197 =='+'){
$emanic = "S";
$ewavy = "redbar.gif";
}
else {
$emanic = "N";
$bwavy = "bar.gif";
}

$grafmsg .= "
<table class='table-responsive' width=629 border=0 align=center>
<tr height=51>
<td width=28></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
<td align=center width=60></td>
</tr>

<tr>
<td></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$a</strong><br><IMG SRC='bar.gif' width=10 height=$apx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$b</strong><br><IMG SRC='$bwavy' width=10 height=$bpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$c</strong><br><IMG SRC='bar.gif' width=10 height=$cpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$d</strong><br><IMG SRC='bar.gif' width=10 height=$dpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$e</strong><br><IMG SRC='$ewavy' width=10 height=$epx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$f</strong><br><IMG SRC='bar.gif' width=10 height=$fpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$g</strong><br><IMG SRC='bar.gif' width=10 height=$gpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$h</strong><br><IMG SRC='bar.gif' width=10 height=$hpx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$i</strong><br><IMG SRC='bar.gif' width=10 height=$ipx style='background-color:#00008b'></td>
<td valign=bottom align=center><font size=2 color=#00008b><strong>$j</strong><br><IMG SRC='bar.gif' width=10 height=$jpx style='background-color:#00008b'></td>
</tr>
</table>

<font size=1>
<br><img width=15 height=15 src='bar.gif'> TRAÇO NORMAL <font size=3>|</font>
<img width=15 height=15 src='redbar.gif'> TRAÇO VARIÁVEL

<br><br><img width=15 height=15 src='pixgray.gif'> ACEITÁVEL EM CONDIÇÕES NORMAIS <font size=3>|</font>
<img width=15 height=15 src='pixdgray.gif'> ATENÇÃO DESEJÁVEL <font size=3>|</font>
<strong>ABAIXO DO PONTILHADO</strong> - ATENÇÃO URGENTE</font>
";

?>
