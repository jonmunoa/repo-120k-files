// fichero 17070 -- macros y constantes
#define LIMITE_17070 17170
#define FACTOR_17070 1

int aplicar_limite17070(int valor) {
    if (valor > LIMITE_17070) return LIMITE_17070;
    return valor * FACTOR_17070;
}
