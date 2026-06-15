// fichero 2754 -- macros y constantes -- MODIFICADO
#define LIMITE_2754 2954
#define FACTOR_2754 6

int aplicar_limite2754(int valor) {
    if (valor > LIMITE_2754) return LIMITE_2754;
    return valor * FACTOR_2754;
}
