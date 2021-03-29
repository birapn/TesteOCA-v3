<?php
//BUSCA AS VARIÁVEIS
include "buscavars.inc";
include "header.inc";

if ($nome ==null or $mail ==null)
{echo "<br><center><font face=verdana color=red size=2><strong>
Por favor, verifique os campos em vermelho</strong></center></font>";
include_once "EntraDados.inc";}

if ($nome !=null AND $mail !=null)
{echo "
<form action=teste.php method=post>
<table align=center width=500>
<tr>
<td>
<center>
<br>
  <strong>TESTE DE PERSONALIDADE OXFORD</strong>
<br />
<ol>
Este teste tem como propósito, proporcionar dados que nos ajude a orientá-la(o)
em como melhorar as áreas de sua vida, nas quais você possa estar tendo qualquer dificuldade.<br />
<br>
<ol>
<font face=verdana size=3 color=red><b>IMPORTANTE!!!</b></font> Reserve 20 a 30 minutos do seu tempo e se possível sem interrupções e distrações para responder as perguntas a seguir.<br />
<br>
</center>
<center>
<strong>INSTRUÇÕES</strong>
<br>
<br />
<ul>Responda todas as perguntas da maneira como se sente agora.</ul>
<ul>Não fique muito tempo na mesma questão.</ul>
<ul>Responda assim que entender e vá para a próxima.</ul>
<ul>A precisão do resultado depende da sinceridade das suas respostas.</ul>
<br />
</center>
<br><br />
<strong>RESPONDA:</strong>
<br><br />
<strong>(+)</strong> SIM OU NA MAIORIA DAS VEZES SIM.<br />
<strong>(m)</strong> TALVEZ OU EM DÚVIDA.<br />
<strong>(-)</strong> NÂO OU NA MAIORIA DAS VEZES NÃO.<br />


</ol>

<input type='hidden' name='nome' value='$nome' />
<input type='hidden' name='sobrenome' value='$sobrenome' />
<input type='hidden' name='sexo' value='$sexo' />
<input type='hidden' name='idade' value='$idade' />
<input type='hidden' name='cidade' value='$cidade' />
<input type='hidden' name='uf' value='$uf' />
<input type='hidden' name='telefone' value='$telefone' />
<input type='hidden' name='telefone2' value='$telefone2' />
<input type='hidden' name='mail' value='$mail' />
<input type='hidden' name='conhecipor' value='$conhecipor' />
</td>
</tr>
<tr>
<td>
<br>
<center>
<input type=submit value=Comecar!>
</center>
<br />
</td>
</tr>
</table>
</form>
";}

include "footer.inc";
?>
