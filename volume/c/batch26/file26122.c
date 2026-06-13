// fichero 26122 -- macros y constantes
#define LIMITE_26122 26222
#define FACTOR_26122 3

int aplicar_limite26122(int valor) {
    if (valor > LIMITE_26122) return LIMITE_26122;
    return valor * FACTOR_26122;
}
