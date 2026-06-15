// fichero 10754 -- macros y constantes -- MODIFICADO
#define LIMITE_10754 10954
#define FACTOR_10754 6

int aplicar_limite10754(int valor) {
    if (valor > LIMITE_10754) return LIMITE_10754;
    return valor * FACTOR_10754;
}
