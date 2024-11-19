# GS-Edge-Computing

Este projeto foi feito para monitorar a energia gerada de painéis solares, ele lê a voltagem de quatro placas solares usando um Arduino e mostra a voltagem total em um display LCD e no monitor serial.

## O que você vai precisar
- **Arduino** (qualquer modelo com entradas analógicas)
- **Display LCD** compatível com a biblioteca Adafruit LiquidCrystal
- **Placas solares** ou outros sensores de voltagem
- **Cabos jumper** para as conexões

## Explicação do Código

### Variáveis
- **placa_1, placa_2, placa_3, placa_4**: Guardam as leituras das quatro placas solares.
- **voltagem_total**: Guarda a soma das voltagens das placas solares, ou seja, a voltagem total.

### Configuração Inicial (`setup`)
- Define as entradas analógicas `A0`, `A1`, `A2`, `A3` como entradas para leitura.
- Inicia a comunicação com o monitor serial a 9600 bps.
- Configura o LCD para ter 16 colunas e 2 linhas.

### Função Principal (`loop`)
1. **Leitura das Placas**: O código lê as voltagens das placas solares nas entradas analógicas do Arduino, convertendo para valores de voltagem (entre 0 e 5V) e guardando cada valor nas variáveis `placa_1`, `placa_2`, `placa_3` e `placa_4`.
2. **Cálculo da Voltagem Total**: Soma as voltagens das quatro placas e armazena em `voltagem_total`.
3. **Exibição no Serial e LCD**:
   - No **Serial**, mostra a voltagem individual de cada placa e a voltagem total.
   - No **LCD**, exibe “Placas Solares” e a voltagem total na linha de baixo.
4. **Delay e Limpeza do LCD**: O código espera 5 segundos antes de limpar o LCD e repetir o processo.

## Observação
O cálculo `(5.001 / 1023.001)` é usado para converter o valor da leitura analógica para a voltagem real, pois a leitura analógica retorna um valor entre 0 e 1023.

## Como Montar
Siga o modelo do Tinkercad
https://www.tinkercad.com/things/0ldnMnbb979-gs-solar-volts-lcd

## Sobre o Projeto
Este projeto foi feito para melhorar a gestão de energia de uma casa, empresa ou fábrica.

## Licença
Este projeto é livre para ser usado e modificado para fins de estudo.
