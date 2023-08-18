# Controle de LED com Botão usando Arduino
Simule no Tinkercad(https://www.tinkercad.com/things/hVh4aAiPIvL-millis)
Este é um projeto simples que demonstra como controlar um LED utilizando um botão, implementado em uma placa Arduino. Quando o botão é pressionado por um determinado período de tempo, o LED acende e pisca várias vezes.

## Funcionamento

O programa lê o estado do botão e, quando o botão é pressionado, registra o momento do pressionamento. O programa então calcula o tempo decorrido desde o pressionamento do botão e, se esse tempo estiver dentro do intervalo de 5 a 10 segundos, o LED é ligado e pisca várias vezes.

## Componentes Necessários

- Arduino Uno (ou outra placa compatível)
- Botão (push-button)
- LED
- Resistor de 220 ohms (para limitar a corrente do LED)
- Jumpers e cabos

## Montagem

1. Conecte o botão entre um pino digital e o terra (GND) com um resistor pull-up.
2. Conecte o LED com um resistor de 220 ohms em série ao pino digital escolhido.
3. Carregue o código na placa Arduino usando o software Arduino IDE.

## Uso

1. Pressione o botão por um período de tempo entre 5 a 10 segundos.
2. O LED deverá acender e piscar várias vezes.
3. O LED apagará após a conclusão da animação.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para fazer melhorias, correções ou adicionar novos recursos.

## Autor

Elismar Silva 
