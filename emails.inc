<?php

//FORMATAÇÃO DO EMAIL

$msg = '
<style>
.table-responsive {
  display: block;
  position: relative;
  width: 100%;
  background-image: url("fundo_graf.gif");
}

.table-responsive thead,
.table-responsive tbody,
.table-responsive th,
.table-responsive td,
.table-responsive tr {
  -- display: block;
}

.table-responsive table {
  width: auto;
  position: absolute;
  overflow-x: auto;
  -webkit-overflow-scrolling: touch;
  white-space: nowrap;
}
</style>';

//INICIO DO CORPO
$msg .= '<center><em>Análise de Capacidade Oxford</em><br><strong>Nome:</strong>'
.$nome.' '.$sobrenome.'|';

$msg .= '<strong>Email:</strong> <a href="mailto:'.$mail.'">'
.$mail.'</a><br>';

$msg .= '<strong>Cidade:</strong> '.$cidade.' &nbsp; ';
$msg .= '<strong>Estado:</strong> '.$uf.' &nbsp; ';
$msg .= '<strong>Telefone:</strong> '.$telefone. '&nbsp; ';
$msg .= '<strong>Telefone 2:</strong> '.$telefone2.'<br>';
$msg .= '<strong>Sexo:</strong> '.$sexo .'&nbsp; ';
$msg .= '<strong>Idade:</strong> '.$idade.'<br>';
$msg .= '<strong>Origem:</strong> '.$conhecipor.'<br>';

$msg .= "$grafmsg";
$msg .= "$colmsg";
$msg .= "$sinmsg";

// Always set content-type when sending HTML email
$headers = "MIME-Version: 1.0" . "\r\n";
$headers .= "Content-type:text/html;charset=UTF-8" . "\r\n";

// More headers
$headers .= 'From: <birapn.net@gmail.com>' . "\r\n";
mail('birapn.net@gmail.com',"Teste OCA - $nome $sobrenome", $msg, $headers);

//echo "Teste enviado com sucesso!";
?>