// fichero 36074 -- macros y constantes -- MODIFICADO
#define LIMITE_36074 36274
#define FACTOR_36074 6

int aplicar_limite36074(int valor) {
    if (valor > LIMITE_36074) return LIMITE_36074;
    return valor * FACTOR_36074;
}
