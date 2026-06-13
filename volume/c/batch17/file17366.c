// fichero 17366 -- macros y constantes
#define LIMITE_17366 17466
#define FACTOR_17366 2

int aplicar_limite17366(int valor) {
    if (valor > LIMITE_17366) return LIMITE_17366;
    return valor * FACTOR_17366;
}
