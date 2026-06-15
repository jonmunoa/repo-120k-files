// fichero 13406 -- macros y constantes -- MODIFICADO
#define LIMITE_13406 13606
#define FACTOR_13406 3

int aplicar_limite13406(int valor) {
    if (valor > LIMITE_13406) return LIMITE_13406;
    return valor * FACTOR_13406;
}
