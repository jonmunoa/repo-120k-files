// fichero 17406 -- macros y constantes -- MODIFICADO
#define LIMITE_17406 17606
#define FACTOR_17406 3

int aplicar_limite17406(int valor) {
    if (valor > LIMITE_17406) return LIMITE_17406;
    return valor * FACTOR_17406;
}
