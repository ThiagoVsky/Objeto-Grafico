01. Projeto PAINT
Objetivo: Implementação de uma estrutura de classes organizada e funcional, com documentação e diagramas cumprindo as especificações declaradas.

Especificações
Uma classe chamada de Paint

Que tem um:
Um string label
Um vector<ObjetoGrafico> objetosGraficos
Um int sequenciador de ObjetoGrafico como uma lista polimórifica de objetos gráficos.

Ela é uma classe que realiza as funcionalidades de:

acrescentar(tipo, x1, y1, x2, y2, cor) um ObjetoGrafico.

apagar(sequencial) para apagar um ObjetoGrafico da lista polimórfica.
apagar() para limpar todos os objetos de sua lista polimórfica vector<ObjetoGrafico>.
mover(sequencial, dx, dy) (sequencial, dx, dy) conjuntamente as posições x1, y1, x2 e y2 de um ObjetoGrafico.
redimensionarObjetoGrafico(sequencial, x2, y2) que altera as posições x2 e y2 de um ObjetoGrafico.
desenhar() para imprimir os dados de todos os objetos de sua lista polimórfica vector<ObjetoGrafico>.
ler(label) que recebe um nome de arquivo como label e lê os dados do objeto Paint).
gravar(label) que grava um arquivo com o nome do label .
Uma classe chamada de ObjetoGrafico virtual.

São heranças da classe ObjetoGrafico:

Linha
Quadrado
Retangulo
Circulo
Oval
Os ObjetoGrafico tem construtores:

Um sequencial em seu constructor, oriundo da classe Paint.
Um tipo enumerado por herança de ObjetoGrafico.
4 inteiros de posição (x1, y1, x2, y2) por herança de ObjetoGrafico sendo que:
o objeto Quadrado pode receber apenas (x1, y1, tamanho).
o objeto Circulo pode receber apenas (x0, y0, raio). Nota: são sobrecargas dos construtores específicos.
Um atributo cor que é um de cores {PRETO, BRANCO, VERMELHO, AZUL, VERDE} que é sua cor interna (se não for definida aceita um "default" do enum BRANCO, PRETO).

Os ObjetoGrafico tem os metodos:

Tem um metodo mover(dx, dy).
Tem um metodo redimensionar(x2, y2).
Tem um metodo toString() com uma deserialização transformando o objeto em um string definindo seu modelo.
Entrega
A entrega é que das classes vem com um Comentário definindo a classe e o autor (matricula e nome do aluno).

A entrega prevê as classes documentadas.

A entrega prevê um código main que comprove a execução dos métodos das classes implementadas.

A entrega prevê um Diagrama de Classes.

A entrega será avaliada segundo o cumprimento de todas as Especificações acima na data definida no ambiente Teams, com um código main que demonstre a realização como solicitada.
