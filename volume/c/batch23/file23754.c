// fichero 23754 -- macros y constantes
#define LIMITE_23754 23854
#define FACTOR_23754 5

int aplicar_limite23754(int valor) {
    if (valor > LIMITE_23754) return LIMITE_23754;
    return valor * FACTOR_23754;
}
