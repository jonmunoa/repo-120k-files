// fichero 16406 -- macros y constantes -- MODIFICADO
#define LIMITE_16406 16606
#define FACTOR_16406 3

int aplicar_limite16406(int valor) {
    if (valor > LIMITE_16406) return LIMITE_16406;
    return valor * FACTOR_16406;
}
