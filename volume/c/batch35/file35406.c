// fichero 35406 -- macros y constantes -- MODIFICADO
#define LIMITE_35406 35606
#define FACTOR_35406 3

int aplicar_limite35406(int valor) {
    if (valor > LIMITE_35406) return LIMITE_35406;
    return valor * FACTOR_35406;
}
