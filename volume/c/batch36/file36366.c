// fichero 36366 -- macros y constantes
#define LIMITE_36366 36466
#define FACTOR_36366 2

int aplicar_limite36366(int valor) {
    if (valor > LIMITE_36366) return LIMITE_36366;
    return valor * FACTOR_36366;
}
