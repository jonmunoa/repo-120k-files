// fichero 23366 -- macros y constantes
#define LIMITE_23366 23466
#define FACTOR_23366 2

int aplicar_limite23366(int valor) {
    if (valor > LIMITE_23366) return LIMITE_23366;
    return valor * FACTOR_23366;
}
