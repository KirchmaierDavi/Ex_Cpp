[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10524195&assignment_repo_type=AssignmentRepo)
# :wave: Manipulaçao de Arquivos em C++

## 🤓 Resumo

Objetivo dessa atividade é praticar manipulaçao de arquivos em C++ 🚀

Espera-se que ao final seja capaz de criar, editar, buscar informaçoes e fechar arquivos e compreender os principais conceitos por trás dessas açoes. 

Obs.: Essa atividade não vale pontos, use para se familiarizar com o modelo de submissão que será utilizado nas atividades em dupla.

## 💻 Termos para saber

### Arquivo 
É um conjunto de dados, dispostos de forma sequencial.

### buffer 
Pode ser usado para acelerar a leitura e escrita de arquivos.

### Cursor
Um cursor é associado ao arquivo de forma a indicar a próxima posição a ser lida ou gravada.
O cursor é inicializado com 0 na abertura do arquivo.
O cursor é incrementado a cada operação de leitura ou escrita no arquivo.

### Abertura de arquivo
Deve-se associar um stream a um arquivo e realizar uma operação de abertura. 
Após a abertura, informações podem ser trocadas entre o arquivo e o seu programa. 
A operação de abertura inicializa o cursor.

### Fechamento do Arquivo
A operação de fechamento de arquivo desassocia o arquivo do stream. 
Libera a memória (equivalente ao free p/ memória alocada dinamicamente). 
Se um arquivo aberto para escrita for fechado, o conteúdo de seu buffer associado é escrito no arquivo para evitar perda de conteúdo.

## 🗄: Atividade

Em C++ deve-se associar um stream a um arquivo e realizar uma operação de abertura.

### Execute o codigo em C++ files.cpp e localize as funcoes que executam as operações abaixo:

- criar um arquivo binario = geraArquivoBinario
- escrever e gravar registros no arquivo existente = escreveArquivoBinario
- buscar um registro dentro do arquivo =  leArquivoBinario
- fechar o arquivo = arq.close();

## 📝 Passos

* Abra uma pull request para que a professora saiba que encerrou a atividade.  
* Crie um outro documento como esse tipo markdown para escrever o que aprendeu ou que ainda tem dúvida. 


## 📚  Recursos: 
* [Cplusplus Files](http://www.cplusplus.com/doc/tutorial/files/) 


