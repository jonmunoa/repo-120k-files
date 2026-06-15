// fichero 1962 -- macros y constantes -- MODIFICADO
#define LIMITE_1962 2162
#define FACTOR_1962 4

int aplicar_limite1962(int valor) {
    if (valor > LIMITE_1962) return LIMITE_1962;
    return valor * FACTOR_1962;
}
