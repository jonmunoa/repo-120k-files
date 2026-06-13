// fichero 50686 -- macros y constantes
#define LIMITE_50686 50786
#define FACTOR_50686 2

int aplicar_limite50686(int valor) {
    if (valor > LIMITE_50686) return LIMITE_50686;
    return valor * FACTOR_50686;
}
