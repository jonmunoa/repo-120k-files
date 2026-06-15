// fichero 17754 -- macros y constantes -- MODIFICADO
#define LIMITE_17754 17954
#define FACTOR_17754 6

int aplicar_limite17754(int valor) {
    if (valor > LIMITE_17754) return LIMITE_17754;
    return valor * FACTOR_17754;
}
