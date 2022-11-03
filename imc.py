print('-------- CALCULADORA DE IMC --------')

peso = float(input('Informe seu peso: '))
altura = float(input('Informe sua altura: '))
imc = round(peso / (altura * altura), 2)

if imc <= 18.5:
  print(f'Seu IMC é {imc} e sua classificação é de: baixo peso')
elif imc > 18.5 and imc <= 24.9:
  print(f'Seu IMC é {imc} e sua classificação é de: eutrofia')
elif imc >= 25 and imc < 29.9:
  print(f'Seu IMC é {imc} e sua classificação é de: sobrepeso')
else:
  print(f'Seu IMC é {imc} e sua classificação é de: obesidade')


