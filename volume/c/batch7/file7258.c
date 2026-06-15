// fichero 7258 -- macros y constantes -- MODIFICADO
#define LIMITE_7258 7458
#define FACTOR_7258 5

int aplicar_limite7258(int valor) {
    if (valor > LIMITE_7258) return LIMITE_7258;
    return valor * FACTOR_7258;
}
