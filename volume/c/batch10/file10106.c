// fichero 10106 -- macros y constantes
#define LIMITE_10106 10206
#define FACTOR_10106 2

int aplicar_limite10106(int valor) {
    if (valor > LIMITE_10106) return LIMITE_10106;
    return valor * FACTOR_10106;
}
