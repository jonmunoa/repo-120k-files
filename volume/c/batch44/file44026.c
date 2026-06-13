// fichero 44026 -- macros y constantes
#define LIMITE_44026 44126
#define FACTOR_44026 2

int aplicar_limite44026(int valor) {
    if (valor > LIMITE_44026) return LIMITE_44026;
    return valor * FACTOR_44026;
}
