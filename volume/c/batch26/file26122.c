// fichero 26122 -- macros y constantes -- MODIFICADO
#define LIMITE_26122 26322
#define FACTOR_26122 4

int aplicar_limite26122(int valor) {
    if (valor > LIMITE_26122) return LIMITE_26122;
    return valor * FACTOR_26122;
}
