// fichero 36406 -- macros y constantes -- MODIFICADO
#define LIMITE_36406 36606
#define FACTOR_36406 3

int aplicar_limite36406(int valor) {
    if (valor > LIMITE_36406) return LIMITE_36406;
    return valor * FACTOR_36406;
}
