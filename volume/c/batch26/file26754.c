// fichero 26754 -- macros y constantes -- MODIFICADO
#define LIMITE_26754 26954
#define FACTOR_26754 6

int aplicar_limite26754(int valor) {
    if (valor > LIMITE_26754) return LIMITE_26754;
    return valor * FACTOR_26754;
}
