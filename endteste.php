<?php

$nome = $_POST['nome'] . ' ' . $_POST['sobrenome'];

$mail = $_POST['mail'];

$quero = $_POST['quero'];

$fone = $_POST['fone'] . ' CEL:' . $_POST['fonecel'];

$opiniao = $_POST['opiniao'];

$conhecipor = $_POST['conhecipor'];

$msg .= "
NOME: $nome
TEL: $fone
MAIL: $mail
OPINIAO: $opiniao
CONHECIPOR: $conhecipor

$quero por meu nome na lista de convidados para eventos.";


// Always set content-type when sending HTML email
$headers = "MIME-Version: 1.0" . "\r\n";

// More headers
$headers .= 'From: <birapn.net@gmail.com>' . "\r\n";
mail("birapn.net@gmail.com", "OCA", $msg, $headers);

echo "E-mail enviado com sucesso!";

?>