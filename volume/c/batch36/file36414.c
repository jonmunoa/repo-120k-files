// fichero 36414 -- macros y constantes
#define LIMITE_36414 36514
#define FACTOR_36414 5

int aplicar_limite36414(int valor) {
    if (valor > LIMITE_36414) return LIMITE_36414;
    return valor * FACTOR_36414;
}
