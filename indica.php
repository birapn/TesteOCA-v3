<?php



//CABEÇALHO

include "header.inc";

$opiniao = $_POST['opiniao'];
$conheci = $_POST['conhecipor'];
?>



<p><center><br><br><font face=arial><font color=cc0000 size=5><b>INDIQUE ESTE TESTE PARA UM(A) AMIGO(A)</b></font><br><br>



<form action='endteste.php' method='post'>
<?php
 echo "<input type='hidden' name='opiniao' value='$opiniao'/>";
 echo "<input type='hidden' name='conhecipor' value='$conhecipor'/>";
?>

<input type=radio name=quero value=INDICO checked>Selecione aqui se quer indicar o teste para seu\sua amigo(a).<br>

<input type=radio name=quero value='NÃO INDICO' >Não vou indicar agora.<br><br>




<table align='center' border=0>

<?php

if ($nome1 == null)

{echo "<tr height=30><td><font face=verdana size=2><font color=red>Nome: </font>";}

else 

{echo "<tr height=30><td><font face=verdana size=2>Nome: ";}

echo "

<input style='width: 120px; height: 20px;' maxlength='150' size='52' name='nome' value='$nome1'>

&nbsp;Sobrenome: <input style='width: 122px; height: 20px;' maxlength='150' size='52' name='sobrenome' value='$sobrenome1'></td></tr>

<tr height=30><td><font face=verdana size=2>

Telefone: <input style='width: 88px; height: 20px;' maxlength='11' size='13' name='fone' value='$fone1'>

Telefone (Celular): <input style='width: 93px; height: 20px;' maxlength='11' size='13' name='fonecel' value='$fonecel1'></td></tr>

";

if ($mail == null)

{echo "<tr height=30><td><font face=verdana size=2><font color=red>E-mail: </font>";}

else 

{echo "<tr height=30><td><font face=verdana size=2>E-mail: ";}

echo "

<input style='width: 332px; height: 20px;' size='23' name='mail' value='$mail1'></td></tr>

<tr height=30><td>

<center>

<input type=submit value='Enviar dados'>

</center></td></tr></table></form>";









//RODAPÉ

include "footer.inc";



/*echo "$msg";*/



?>