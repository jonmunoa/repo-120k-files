// fichero 52234 -- macros y constantes
#define LIMITE_52234 52334
#define FACTOR_52234 5

int aplicar_limite52234(int valor) {
    if (valor > LIMITE_52234) return LIMITE_52234;
    return valor * FACTOR_52234;
}
