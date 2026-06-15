// fichero 1406 -- macros y constantes -- MODIFICADO
#define LIMITE_1406 1606
#define FACTOR_1406 3

int aplicar_limite1406(int valor) {
    if (valor > LIMITE_1406) return LIMITE_1406;
    return valor * FACTOR_1406;
}
