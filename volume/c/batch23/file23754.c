// fichero 23754 -- macros y constantes -- MODIFICADO
#define LIMITE_23754 23954
#define FACTOR_23754 6

int aplicar_limite23754(int valor) {
    if (valor > LIMITE_23754) return LIMITE_23754;
    return valor * FACTOR_23754;
}
