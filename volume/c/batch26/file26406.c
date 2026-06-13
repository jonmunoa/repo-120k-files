// fichero 26406 -- macros y constantes
#define LIMITE_26406 26506
#define FACTOR_26406 2

int aplicar_limite26406(int valor) {
    if (valor > LIMITE_26406) return LIMITE_26406;
    return valor * FACTOR_26406;
}
