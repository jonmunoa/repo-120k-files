// fichero 30754 -- macros y constantes -- MODIFICADO
#define LIMITE_30754 30954
#define FACTOR_30754 6

int aplicar_limite30754(int valor) {
    if (valor > LIMITE_30754) return LIMITE_30754;
    return valor * FACTOR_30754;
}
