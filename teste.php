<?php
//BUSCA AS VARIÁVEIS
include "buscavars.inc";
include "header.inc";
include "perguntas.inc";

//BARRA DE PROGRESSO
/*
echo "<br><table width=480 align=center border=0 cellspacing=4>
<tr>
<td height=30 width=50 bgcolor=lightblue><font color=white face=verdana size=1><center><strong>Parte 1</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 2</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 3</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 4</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 5</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 6</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 7</td>
<td height=30 width=50 bgcolor=#00008b><font color=white face=verdana size=1><center><strong>Parte 8</td>
</tr>
</table><br>
";
*/

//PERGUNTAS

echo "<form action=resultado.php method=post>
<table align=center width=530 border=0 cellspacing=5>";

for ($i=1 ; $i <201 ; $i++)
{
echo "
<tr>
	<td>
	<strong><font face=arial size=2 color=gray>&nbsp;+ &nbsp;&nbsp;m &nbsp;&nbsp;- </font></strong><br>
	<input value='+' name='R$i' type='radio'>
	<input value='m' name='R$i' type='radio'>
	<input value='-' name='R$i' type='radio'>
	<font face=verdana size=2>
	$i. ${p.$i}<br><br>
	</td>
</tr>	
";
}

//AGRUPAMENTO DE VARIÁVEIS
echo "
<tr><td>
<input type=hidden name=nome value='$nome'>
<input type=hidden name=sobrenome value='$sobrenome'>
<input type=hidden name=sexo value='$sexo'>
<input type=hidden name=idade value='$idade'>
<input type=hidden name=cidade value='$cidade'>
<input type=hidden name=uf value='$uf'>
<input type=hidden name=telefone value='$telefone'>
<input type=hidden name=telefone2 value='$telefone2'>
<input type=hidden name=mail value='$mail'>
<input type=hidden name=conhecipor value='$conhecipor'>
<center>
<input type=submit value=$np>
</center></td></tr></table></form>
";

include "footer.inc";
?>