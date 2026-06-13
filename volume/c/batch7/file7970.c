// fichero 7970 -- macros y constantes
#define LIMITE_7970 8070
#define FACTOR_7970 1

int aplicar_limite7970(int valor) {
    if (valor > LIMITE_7970) return LIMITE_7970;
    return valor * FACTOR_7970;
}
