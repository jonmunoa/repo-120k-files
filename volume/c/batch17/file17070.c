// fichero 17070 -- macros y constantes -- MODIFICADO
#define LIMITE_17070 17270
#define FACTOR_17070 2

int aplicar_limite17070(int valor) {
    if (valor > LIMITE_17070) return LIMITE_17070;
    return valor * FACTOR_17070;
}
