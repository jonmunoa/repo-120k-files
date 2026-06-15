// fichero 14406 -- macros y constantes -- MODIFICADO
#define LIMITE_14406 14606
#define FACTOR_14406 3

int aplicar_limite14406(int valor) {
    if (valor > LIMITE_14406) return LIMITE_14406;
    return valor * FACTOR_14406;
}
