Este projeto é um Estacionamento que verifica quais vagas estão disponíveis através de um Sensor de Obstáculo Infravermelho (LM393) e mostra a quantidade de vagas disponíveis através de um display que ficará na entrada do estacionamento, por um site e também por um aplicativo de celular. 
Para a comunicação entre o Arduino e o Site, é usado um Ethernet Shield que conecta o Arduino na internet e através do mesmo é criado um Servidor para que seja mandado os dados obtidos pelo Sensor.

O Projeto com o Nome: EstacionamentoSemIn, é o primeiro projeto, em que funciona somente as partes de sensoriamento e a informação de quantidade de vagas pelo Display

Já o projeto com o Nome: EstacionamentoComIn, é o segundo projeto, em que já é criado uma página de internet acessável através do IP configurado no projeto, mas a página ainda não recarrega automaticamente para caso algum carro ocupe a vaga.

Componentes utilizados no projeto:
    - 1 Arduino Mega 2560;
    - 1 Ethernet Shield W5100;
    - 1 Display LCD 16x2;
    - 5 Sensores de Obstáculo Ultrassonico (LM393);
    - 5 LED's RGB Anodo Comum
    - 1 Potenciômetro
    - Jumpers