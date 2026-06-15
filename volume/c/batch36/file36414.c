// fichero 36414 -- macros y constantes -- MODIFICADO
#define LIMITE_36414 36614
#define FACTOR_36414 6

int aplicar_limite36414(int valor) {
    if (valor > LIMITE_36414) return LIMITE_36414;
    return valor * FACTOR_36414;
}
