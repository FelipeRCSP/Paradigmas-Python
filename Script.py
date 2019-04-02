# -*- coding: utf-8 -*-
import time, os, sys
while True:
    

    try:
        # FUNC LIMPA TELA
        def clear():
            os.system('cls' if os.name == 'nt' else 'clear')
 

        # FUNCAO AVALIAR SE NOTA ENTRE 0 A 10
        def val(nota):

            while nota > 10 or nota < 0:
                clear()
                print("Dados invalidos \n")
                time.sleep(.5)
                nota = float(input("Insira um valor de 0 a 10: "))
                clear()
            time.sleep(.1)
            clear()
            return nota

        def restart():
            for i in range(5, 0, -1):
                sys.stdout.write("\r\t  Reiniciando em {} segundos".format(i))
                sys.stdout.flush()
                time.sleep(1)


        # INSERINDO NOTAS E CHAMANDO FUNCAO
        clear()
        p1 = float(input("Entre com a nota da prova 1: "))
        p1 = val(p1)

        ma1 = float(input("Entre com a nota da Ma 1: "))
        ma1 = val(ma1)

        mb1 = float(input("Entre com a nota da MB 1: "))
        mb1 = val(mb1)

        p2 = float(input("Entre com a nota da prova 2: "))
        p2 = val(p2)

        ma2 = float(input("Entre com a nota da ma 2: "))
        ma2 = val(ma2)

        mb2 = float(input("Entre com a nota da mb 2: "))
        mb2 = val(mb2)

        qAula = int(input("Quantidade de aulas: "))
        qFalta = int(input("Faltas: "))
        clear()

        # CALCULOS
        A1 = (p1 * 0.7) + (ma1 * 0.2) + (mb1 * 0.1)
        A2 = (p2 * 0.7) + (ma2 * 0.2) + (mb2 * 0.1)
        MF = (A1 + 2 * A2) / 3

        print("\n" * 5)
        if qFalta > (qAula * 0.75):
            print("                REPROVADO POR FALTAS")
        elif MF >= 5.0:
            print("                APROVADO")
        elif MF >= 3.0:
            print("                RECUPERAÇÃO")
        else:
            print("                REPROVADO POR NOTA")
        print("\n" * 5)
        restart()


       
    except (NameError , SyntaxError, TypeError, ValueError ):
        clear()
        print("\n" * 5)
        print("\t\t\tInsira dados válidos infeliz")
        print("\n" * 5)
        time.sleep(2)


