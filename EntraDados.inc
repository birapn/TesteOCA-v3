<?php
$nome = $_POST[nome];
$mail = $_POST[mail];
?>

<br><font face=verdana size=2 color=#00008b><center><b>Dados Pessoais:</b></center></font><br>

<form action='prepara.php' method='post'>
<table align='center' border=0>
<?php
if ($nome == null)
{echo "<tr height=30><td><font face=verdana size=2><font color=black><strong>Nome:</strong></font>";}
else 
{echo "<tr height=30><td><font face=verdana size=2>Nome: ";}

echo "
<input style='width: 145px; height: 20px;' maxlength='150' size='52' name='nome' value='$nome'required>
&nbsp;<strong>Sobrenome:</strong> <input style='width: 145px; height: 20px;' maxlength='150' size='52' name='sobrenome' value='$sobrenome'></td></tr>
	
<tr height=30><td><font face=verdana size=2>
<strong>Idade: </strong><input type=radio value='MAIOR' name='idade' CHECKED>Mais de 18 anos
&nbsp;&nbsp;<input type=radio value='MENOR' name='idade'>Menos de 18 anos</td></tr>
	
<tr height=30><td><font face=verdana size=2>
<strong>Sexo: </strong><input type=radio value='MASC' name='sexo' checked>Masculino
&nbsp;&nbsp;&nbsp;<input type=radio value='FEM' name='sexo'>Feminino</td></tr>
	
<tr height=30><td><font face=verdana size=2>
<strong>Cidade:</strong> <input style='width: 180px; height: 20px;' maxlength='50' size='10' name='cidade' value='$cidade'required>&nbsp;&nbsp;&nbsp;
<strong>UF:</strong> <input style='width: 50px; height: 20px;' maxlength='2' size='3' name='uf' value='$uf'required>&nbsp;&nbsp;&nbsp;&nbsp;
	
<tr height=30><td><font face=verdana size=2>
<strong>Telefone Fixo:</strong> <input style='width: 88px; height: 20px;' maxlength='11' size='13' name='telefone' value='$telefone'>&nbsp;
<strong>Telefone (Celular):</strong> <input style='width: 93px; height: 20px;' maxlength='11' size='13' name='telefone2' value='$telefone2'></td></tr>
";

if ($mail == null)
{echo "<tr height=30><td><font face=verdana size=2><font color=black><strong>E-mail:</strong> </font>";}
else 
{echo "<tr height=30><td><font face=verdana size=2><strong>E-mail:</strong></font>";}

echo "
<input style='width: 386px; height: 20px;' size='30' name='mail' value='$mail'required></td></tr>
<tr height=30><td>
<center><br>
<font face=verdana size=2><font color=black><strong>Nos diga na caixa abaixo, de que forma ficou conhecendo o teste?</strong></font>
<p><font face=verdana size=1><font color=black>(Exemplo: google, facebook, instagram, indicação de um amigo, panfleto, etc.)</font>
<br><font size=1></br>
<textarea name='conhecipor' value='$conhecipor'></textarea><br><br>
<input type=submit value='Enviar dados'>
</center><br></td></tr></br></table></form>";
?>