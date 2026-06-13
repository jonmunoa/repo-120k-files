// fichero 11366 -- macros y constantes
#define LIMITE_11366 11466
#define FACTOR_11366 2

int aplicar_limite11366(int valor) {
    if (valor > LIMITE_11366) return LIMITE_11366;
    return valor * FACTOR_11366;
}
