<center>

# FIAP - Faculdade Informática e Administração Paulista

![ texto](https://c5gwmsmjx1.execute-api.us-east-1.amazonaws.com/prod/dados_processo_seletivo/logo_empresa/124918/logo-420x100px.png_name_20221121-18288-5b9rii.png)

</center>

# 👨🏼‍💻 Integrantes

1. [Levi Passos Silveira Marques](https://www.linkedin.com/in/raphael-dinelli-8a01b278/)
2. [Raphael da Silva](www.linkedin.com/in/raphaelsilva-phael)
3. [Jonas Tadeu V Fernandes]()
4. [Ranna Leslie]()
5. [Raphael Dinelli Neto]()

### GRUPO SP e Interior

---

# 📌 Introdução

## 📄 Descrição da Atividade

Nesta fase do projeto, a FarmTech Solutions avança na aplicação de sensores físicos integrados a um sistema de irrigação inteligente. O objetivo é desenvolver um sistema físico (simulado) que colete dados de sensores de umidade, nutrientes e pH e controle uma bomba de irrigação conforme os valores obtidos. Os dados também devem ser armazenados em um banco de dados SQL, com possibilidade de visualização e análises estatísticas.

## 🔍 Descrição Detalhada

### 💡 Descrição do Projeto
Este projeto tem como objetivo simular um sistema inteligente de monitoramento agrícola utilizando a plataforma Wokwi, que permite a prototipagem virtual de circuitos com microcontroladores, sensores e atuadores. O sistema é controlado por um ESP32, que coleta dados de sensores que representam condições do solo e decide automaticamente se ativa ou não a irrigação.

### 🔍 Sensores simulados:
- Sensor de Fósforo (P): representado por um botão (pressionado = presença, solto = ausência).

- Sensor de Potássio (K): também representado por um botão, com a mesma lógica binária.

- Sensor de pH do solo: representado por um sensor LDR (Light Dependent Resistor), cuja variação de luminosidade simula diferentes níveis de pH.

- Sensor de umidade do solo: representado por um sensor DHT22, que fornece leituras reais de umidade.

### ⚙️ Funcionamento:
O ESP32 realiza a leitura dos sensores e aciona uma bomba de irrigação simulada por meio de um relé virtual. O relé funciona como um interruptor, e seu estado (ligado/desligado) é indicado por um LED embutido (aceso = irrigação ativa; apagado = irrigação inativa). A lógica de controle é definida com base nos valores lidos dos sensores.

### 🗃️ Banco de Dados:
Os dados obtidos pelo ESP32 são exibidos no monitor serial da Wokwi e, posteriormente, inseridos manualmente em um banco de dados Oracle SQL simulado em Python, com suporte completo às operações CRUD (Create, Read, Update, Delete). Essa etapa visa exercitar a integração entre sistemas embarcados e bancos de dados para análise posterior.

---

## 💻 Código C/C++ ESP32

Com tempo, a detalhar

## 🐍 Código Python + CRUD com Banco de Dados

Com tempo, a detalhar

# 🚩 Conclusão

Detalhar a conclusão com o tempo