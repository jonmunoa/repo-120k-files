// fichero 10754 -- macros y constantes
#define LIMITE_10754 10854
#define FACTOR_10754 5

int aplicar_limite10754(int valor) {
    if (valor > LIMITE_10754) return LIMITE_10754;
    return valor * FACTOR_10754;
}
