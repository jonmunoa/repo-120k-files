// fichero 32366 -- macros y constantes
#define LIMITE_32366 32466
#define FACTOR_32366 2

int aplicar_limite32366(int valor) {
    if (valor > LIMITE_32366) return LIMITE_32366;
    return valor * FACTOR_32366;
}
