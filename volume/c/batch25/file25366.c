// fichero 25366 -- macros y constantes
#define LIMITE_25366 25466
#define FACTOR_25366 2

int aplicar_limite25366(int valor) {
    if (valor > LIMITE_25366) return LIMITE_25366;
    return valor * FACTOR_25366;
}
