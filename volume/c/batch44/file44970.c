// fichero 44970 -- macros y constantes
#define LIMITE_44970 45070
#define FACTOR_44970 1

int aplicar_limite44970(int valor) {
    if (valor > LIMITE_44970) return LIMITE_44970;
    return valor * FACTOR_44970;
}
