// fichero 26406 -- macros y constantes -- MODIFICADO
#define LIMITE_26406 26606
#define FACTOR_26406 3

int aplicar_limite26406(int valor) {
    if (valor > LIMITE_26406) return LIMITE_26406;
    return valor * FACTOR_26406;
}
