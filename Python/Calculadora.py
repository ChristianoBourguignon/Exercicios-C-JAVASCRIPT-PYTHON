def calculo(n, eq):
    tamN = len(n)

    for i in range(tamN):
        for j in range(tamN - 1):
            if n[j] < n[j + 1]:
                n[j], n[j + 1] = n[j + 1], n[j]
    print(n)

    # Switch Case 

    def soma(n):
        cal = 0
        for i in range(tamN):
            cal += n[i]
        return cal

    # não funcional
    def subtracao(n):
        cal = 0
        for i in range(tamN - 1):
            cal -= n[i] - n[i+1]
        return cal
    
    # não funcional
    def multiplicacao(n):
        cal = 0
        for i in range(tamN):
            cal *= n[i]
        return cal
    
    # não funcional
    def divisao(n):
        cal = 0
        for i in range(tamN):
            cal /= n[i]
        return cal
        
    equacoes = {
        "+": soma,
        "-": subtracao,
        "*": multiplicacao,
        "/": divisao
    }

    cal = equacoes[eq](n)
    return cal

n = []
tam = int(input("Quantos numeros serão calculados?"))
for i in range(tam):
     n.append(int(input("Qual seria o " + str(i+1) + "° número?")))
equacao = input("Qual será sua equação? Ex: + - / *")
while equacao != "+" and equacao !="-" and equacao !="/" and equacao !="*":
    equacao = input("Equação incorreta, por favor digite algum desses: '+ - / *' ")

soma = calculo(n,equacao)
print("Resultado do calculo: ", soma)


