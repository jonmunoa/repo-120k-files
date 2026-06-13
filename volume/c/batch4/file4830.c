// fichero 4830 -- macros y constantes
#define LIMITE_4830 4930
#define FACTOR_4830 1

int aplicar_limite4830(int valor) {
    if (valor > LIMITE_4830) return LIMITE_4830;
    return valor * FACTOR_4830;
}
