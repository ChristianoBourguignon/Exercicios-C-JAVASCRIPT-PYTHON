def list_sum(lst):
    s = 0
    # for de elementos dentro da lst (vetor)
    for elem in lst:
        s += elem #Soma de todos os elementos dentro do vetor
    
    return s #retorno do valor acumulado em S

print(list_sum([5, 3, 3])) #passar os elementos dessa forma

#caso seja passado dessa forma abaixo, será retornado um erro que um único valor inteiro não deve ser iterado pelo loop
# print(list_sum(5))