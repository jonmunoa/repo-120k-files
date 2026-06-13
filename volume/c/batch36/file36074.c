// fichero 36074 -- macros y constantes
#define LIMITE_36074 36174
#define FACTOR_36074 5

int aplicar_limite36074(int valor) {
    if (valor > LIMITE_36074) return LIMITE_36074;
    return valor * FACTOR_36074;
}
