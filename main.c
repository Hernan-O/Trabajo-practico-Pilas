#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//Trabajo practico n�1 Navarra Hern�n

int main()
{
    int n;
    printf("Ingrese el ejercicio que quiera utilizar: \n");
    scanf("%i",&n);
    switch(n)
    {
    case 1: ;                       //Ejercicio 1
        Pila DADA, AUX1, AUX2;

        inicpila (&DADA);
        inicpila (&AUX1);
        inicpila (&AUX2);

        leer(&DADA);
        leer(&DADA);
        leer(&DADA);
        leer(&DADA);
        leer(&DADA);

        apilar(&AUX1,desapilar(&DADA));
        apilar(&AUX1,desapilar(&DADA));
        apilar(&AUX1,desapilar(&DADA));

        apilar(&AUX2,desapilar(&DADA));
        apilar(&AUX2,desapilar(&DADA));

        printf("\n AUX 1: \n");
        mostrar(&AUX1);
        printf("AUX 2: \n");
        mostrar(&AUX2);

        system("pause");
        return 0;

    case 2: ;                   //Ejercicio 2
        Pila ORIGEN,DESTINO;

        inicpila(&ORIGEN);
        inicpila(&DESTINO);

        leer (&ORIGEN);
        leer (&ORIGEN);
        leer (&ORIGEN);
        mostrar (&ORIGEN);

        apilar(&DESTINO,desapilar(&ORIGEN));
        apilar(&DESTINO,desapilar(&ORIGEN));
        apilar(&DESTINO,desapilar(&ORIGEN));

        mostrar(&DESTINO);

        system("pause");
        return 0;

    case 3: ;                   //Ejercicio 3
        Pila dada,destino;

        inicpila(&dada);
        inicpila(&destino);

        leer (&dada);

        if (tope(&dada) == 8)
        {
            desapilar(&dada);
        }
        else
            apilar (&destino, desapilar(&dada));
        leer (&dada);
        if (tope(&dada) == 8)
        {
            desapilar(&dada);
        }
        else
            apilar (&destino, desapilar(&dada));
        leer (&dada);
        if (tope(&dada) == 8)
        {
            desapilar(&dada);
        }
        else
            apilar (&destino, desapilar(&dada));
        leer (&dada);
        if (tope(&dada) == 8)
        {
            desapilar(&dada);
        }
        else
            apilar (&destino, desapilar(&dada));

        printf("\n\n");

        mostrar (&destino);

        system("pause");
        return 0;

    case 4: ;         //Ejercicio 4
        Pila OrigeN,DestinO,inter;
        inicpila(&OrigeN);
        inicpila(&DestinO);
        inicpila(&inter);

        leer (&OrigeN);
        leer (&OrigeN);
        leer (&OrigeN);
        leer (&OrigeN);

        printf("\nPila Origen\n\n");
        mostrar (&OrigeN);

        apilar(&inter, desapilar (&OrigeN));
        apilar(&inter, desapilar (&OrigeN));
        apilar(&inter, desapilar (&OrigeN));
        apilar(&inter, desapilar (&OrigeN));

        apilar(&DestinO, desapilar(&inter));
        apilar(&DestinO, desapilar(&inter));
        apilar(&DestinO, desapilar(&inter));
        apilar(&DestinO, desapilar(&inter));

        printf("Pila Destino\n\n");
        mostrar (&DestinO);

        system("pause");
        return 0;

    case 5: ;       //Ejercicio 5
        Pila DaDa,Inver1,Inver2;

        inicpila(&DaDa);
        inicpila(&Inver1);
        inicpila(&Inver2);

        leer(&DaDa);
        leer(&DaDa);
        leer(&DaDa);
        leer(&DaDa);

        while(!pilavacia (&DaDa))
        {
            apilar(&Inver1,desapilar (&DaDa));
        }
        while(!pilavacia (&Inver1))
        {
            apilar(&Inver2,desapilar (&Inver1));
        }
        while(!pilavacia (&Inver2))
        {
            apilar(&DaDa, desapilar (&Inver2));
        }
        mostrar(&DaDa);

        system("pause");
        return 0;

    case 6: ;                   //Ejercicio 6
        Pila DAda,base,resto;
        inicpila(&DAda);
        inicpila(&base);
        inicpila(&resto);

        leer(&DAda);
        leer(&DAda);
        leer(&DAda);
        leer(&DAda);

        apilar(&base,desapilar(&DAda));

        while(!pilavacia(&DAda))
        {
            apilar(&resto,desapilar(&DAda));
        }
        apilar(&DAda,desapilar(&base));
        while(!pilavacia(&resto))
        {
            apilar(&DAda,desapilar(&resto));
        }
        mostrar(&DAda);

        system("pause");
        return 0;


    case 7: ;               //Ejercicio 7
        Pila DadA,Base,Resto;
        inicpila(&DadA);
        inicpila(&Base);
        inicpila(&Resto);

        leer(&DadA);
        leer(&DadA);
        leer(&DadA);
        leer(&DadA);

        while(!pilavacia(&DadA))
        {
            apilar(&Resto,desapilar(&DadA));
        }
        apilar(&Base,desapilar(&Resto));

        while(!pilavacia(&Resto))
        {
            apilar(&DadA,desapilar(&Resto));
        }
        apilar(&DadA,desapilar(&Base));

        mostrar(&DadA);

        system("pause");
        return 0;


    case 8: ;               //Ejercicio 8
        Pila MAZO,JUGADOR1,JUGADOR2;
        inicpila(&MAZO);
        inicpila(&JUGADOR1);
        inicpila(&JUGADOR2);

        printf("Ingrese a las 6 cartas que se repartiran \n");

        leer(&MAZO);
        leer(&MAZO);
        leer(&MAZO);
        leer(&MAZO);
        leer(&MAZO);
        leer(&MAZO);

        printf("Ahora se repartiran\n\n");

        while(!pilavacia(&MAZO))
        {
            apilar(&JUGADOR1,desapilar(&MAZO));
            apilar(&JUGADOR2,desapilar(&MAZO));
        }

        printf("Cartas Jugador 1: \n");

        mostrar(&JUGADOR1);

        printf("Cartas Jugador 2: \n");

        mostrar(&JUGADOR2);

        system("pause");
        return 0;

    case 9: ;               //Ejercicio 9
        int continuar, continuarB;
        Pila pilaA,pilaB;
        inicpila(&pilaA);
        inicpila (&pilaB);
        do
        {
            printf("Ingrese datos de la pila A\n");
            leer (&pilaA);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuar) ;
            printf ("\n");
        }
        while (continuar!=0);
        do
        {
            printf("ahora ingrese datos de la pila B\n");
            leer (&pilaB);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuarB);
            printf ("\n");
        }
        while (continuarB!=0);
        printf("La pila A tiene los siguientes datos\n");
        mostrar(&pilaA);
        printf("La pila B tiene los siguientes datos\n");
        mostrar(&pilaB);
        while (!pilavacia(&pilaA) &&!pilavacia (&pilaB))
        {
            desapilar (&pilaA);
            desapilar (&pilaB);
        }
        if(!pilavacia (&pilaA))
        {
            printf ("****La pila A tiene mas elementos****\n");
        }
        else
        {
            if(!pilavacia (&pilaB))
            {
                printf ("****La pila B tiene mas elementos****\n");

            }
            else
            {
                printf ("****Las pilas tienen la misma cantidad de elementos****\n");
            }
        }
        system("pause");
        return 0;

    case 10:  ;                                 //Ejercicio 10
        int continuar2, continuarB2;
        Pila pilaA2,pilaB2;
        inicpila (&pilaA2);
        inicpila (&pilaB2);

        do
        {
            printf("Ingrese datos de la pila A\n");
            leer (&pilaA2);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuar2) ;
            printf ("\n");
        }
        while (continuar2!=0);
        do
        {
            printf("ahora ingrese datos de la pila B\n");
            leer (&pilaB2);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuarB2);
            printf ("\n");
        }
        while (continuarB2!=0);
        {
            printf("La pila A tiene los siguientes datos\n");
            mostrar(&pilaA2);
            printf("La pila B tiene los siguientes datos\n");
            mostrar(&pilaB2);
        }
        while ((tope (&pilaA2)== tope (&pilaB2)) && !pilavacia(&pilaA2) && !pilavacia (&pilaB2))
        {
            desapilar (&pilaA2);
            desapilar (&pilaB2);
        }
        if(!pilavacia (&pilaA2) ||!pilavacia (&pilaB2))
        {
            printf ("Las pilas son distintas\n");
        }
        else
            printf ("Las pilas son iguales\n");

        system("pause");

        return 0;

    case 11:
        ;
        int continuar3;
        Pila MODELO,DADA2,Auxi;
        inicpila(&DADA2);
        inicpila(&Auxi);
        inicpila(&MODELO);
        apilar(&MODELO, 5);
        apilar(&MODELO, 4);
        apilar(&MODELO, 8);
        printf("La pila MODELO tiene los siguientes valores cargados por defecto:\n");
        mostrar(&MODELO);
        printf("\n\nCargue la siguiente pila, teniendo en cuenta que lo que esté en el TOPE de MODELO no se mostrara en la pila DADA\n");
        do
        {
            printf("Ingrese datos de la pila DADA\n");
            leer (&DADA2);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuar3) ;
            printf ("\n");
        }
        while (continuar3!=0);

        do
        {
            if (tope(&DADA2) == tope(&MODELO))
            {
                desapilar(&DADA2);
            }
            else
                apilar(&Auxi, desapilar(&DADA2));
        }
        while(!pilavacia (&DADA2));

        do
        {
            apilar(&DADA2, desapilar (&Auxi));
        }
        while(!pilavacia (&Auxi));

        mostrar(&DADA2);

        system("pause");
        return 0;


    case 12:    ;                           //Ejercicio 12
        int continuar4,continuar5;

        Pila modelo,dada3,auxil,auxil2,iguales;

        inicpila(&modelo);
        inicpila(&dada3);
        inicpila(&auxil);
        inicpila(&auxil2);
        inicpila(&iguales);

        do
        {
            printf("Ingrese datos de la pila modelo\n");
            leer (&modelo);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuar4) ;
            printf ("\n");
        }
        while(continuar4!=0);
        do
        {
            printf("Ingrese datos de la pila DADA\n");
            leer (&dada3);
            printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
            scanf ("%i", &continuar5) ;
            printf ("\n");
        }
        while(continuar5!=0);

        while(!pilavacia(&modelo))
        {

            while(!pilavacia(&dada3))
            {
                if (tope(&dada3) == tope(&modelo))
                {
                    apilar(&iguales,desapilar(&dada3));
                }
                else{
                    apilar(&auxil, desapilar(&dada3));
                }
            }
            apilar(&auxil2, desapilar(&modelo));
        while(!pilavacia (&auxil))
        {
            apilar(&dada3,desapilar(&auxil));
        }
        }

        mostrar(&dada3);


        system("pause");
        return 0;

        case 13:    ;               //Ejercicio 13
                Pila LIMITE,MAYORES,DADA5,MENORES,iguales2;
                int continuar7;
                inicpila(&LIMITE);
                inicpila(&MAYORES);
                inicpila(&DADA5);
                inicpila(&MENORES);
                inicpila(&iguales2);

                printf("Ingrese un limite\n");
                leer(&LIMITE);

                do
                {
                    printf("Ingrese datos de la pila modelo\n");
                    leer (&DADA5);
                    printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
                    scanf ("%i", &continuar7) ;
                    printf ("\n");
                }
                    while(continuar7!=0);


                while(!pilavacia (&DADA5)){
                    if(tope(&DADA5) > tope(&LIMITE)){
                        apilar(&MAYORES, desapilar(&DADA5));
                    }
                    else if(tope(&DADA5) < tope(&LIMITE)){
                        apilar(&MENORES, desapilar(&DADA5));
                        }
                    else
                        apilar(&iguales2,desapilar(&DADA5));
                }
                printf("Pila Menores:\n");
                mostrar(&MENORES);

                printf("\nPila Mayores:\n");
                mostrar(&MAYORES);

                printf("\nPila iguales");
                mostrar(&iguales2);


                system("pause");
                return 0;


        case 14:    ;                   //Ejercicio 14
                int continuar6;
                Pila dada4,impar,par,auxiliar;
                inicpila(&dada4);
                inicpila(&impar);
                inicpila(&par);
                inicpila(&auxiliar);

                 do
                    {
                    printf("Ingrese datos de la pila dada\n");
                    leer (&dada4);
                    printf("\nDesea ingresar otro dato? 1(si), 0(no) \n\n");
                    scanf ("%i", &continuar6) ;
                    printf ("\n");
                    }
                while(continuar6!=0);

                while(!pilavacia(&dada4))
                {
                    apilar(&auxiliar,desapilar(&dada4));
                    if(!pilavacia(&dada4))
                    {
                        apilar(&auxiliar,desapilar(&dada4));
                    }
                    else
                        apilar(&impar,desapilar(&auxiliar));
                }

                if(!pilavacia(&impar))
                {
                    printf("la pila es impar \n\n");
                    mostrar (&impar);
                }
                else{
                    printf("la pila es par\n\n");
                    mostrar(&par);
                }


                system("pause");
                return 0;


        case 15:    ;           //Ejercicio 15
                printf("Cual es la condicion del siguiente ciclo?, Cuando finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):\n");
                printf("\nwhile (!pilavacia(&Pila1)){\n apilar (&Pila2, desapilar(&Descarte))\n} \n\n\n");

                printf("Respuesta: La condicion del ciclo es repetirse hasta que la pila 1 este vacia, pero no finalizaria nunca \nya que en ningun momento se desapila la misma\n");

                system("pause");
                return 0;
        case 16:    ;             //Ejercicio 16

                printf("16.Que realiza el siguiente codigo escrito en lenguaje C (Pila1, Aux y Result son pilas):\n\n");
                printf("while (!pilavacia(&Pila1)) {\n     if (tope(&Pila1) == 5) {\n     apilar (&Aux, desapilar(&Pila1));\n     apilar (&Result, desapilar(&Aux));\n  }\n} \n\n");

                printf("Respuesta:Si entra al if(Que requiere que el tope de Pila 1 sea 5),desapila la pila 1 y la lleva a la pila AUX,\n luego desapila la pila AUX\n y la lleva a la pila Result.\nLo repite hasta vaciar la pila 1\n\nSin embargo, falta el else, por lo que realmente no compilaria.  \n\n");

                system("pause");
                return 0;

        case 17:    ;               //Ejercicio 17

                printf("Para el ejercicio ''Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos elementos\n que preceden al valor 5\n (elementos entre el tope y el valor 5). \nNo se asegura que exista algun valor 5'', se realizo el siguiente programa:\n\n");
                printf("int main() { \nPila Origen, Distinto;\ninicpila(&Origen);\ninicpila(&Distinto);\nleer(&Origen);\nif (!pilaVacia(&Origen)){ \n   while (tope(&Origen) != 5) {\n   apilar (&Distinto, desapilar(&Origen));\n } \n }\n}\n\n");

                printf("\n Respuesta A:No, no lo resuelve\n");

                printf("Respuesta B:Tiene varios errores, el primero:Se carga 1 solo valor a Origen y entra al while\n el segundo:El while fija todo lo que sea desigual a 5(no lo que le precede) y lo manda a distinto\n tercero:el problema de que no hay una estructura repetitiva y tampoco cierra el else.\n");

                printf("Respuesta C:\n")



                system("pause");
                return 0;


        case 18:    ;               //Ejercicio 18
                printf("");
    ///////////////////////////////////////////DEFAULT///////////////////////////////////////////////////
    default:
        ;

        printf("No existe tal ejercicio");

        return 0;
    }
}

