// fichero 50830 -- macros y constantes
#define LIMITE_50830 50930
#define FACTOR_50830 1

int aplicar_limite50830(int valor) {
    if (valor > LIMITE_50830) return LIMITE_50830;
    return valor * FACTOR_50830;
}
