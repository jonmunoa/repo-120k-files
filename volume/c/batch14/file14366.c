// fichero 14366 -- macros y constantes
#define LIMITE_14366 14466
#define FACTOR_14366 2

int aplicar_limite14366(int valor) {
    if (valor > LIMITE_14366) return LIMITE_14366;
    return valor * FACTOR_14366;
}
