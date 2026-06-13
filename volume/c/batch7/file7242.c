// fichero 7242 -- macros y constantes
#define LIMITE_7242 7342
#define FACTOR_7242 3

int aplicar_limite7242(int valor) {
    if (valor > LIMITE_7242) return LIMITE_7242;
    return valor * FACTOR_7242;
}
