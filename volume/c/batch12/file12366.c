// fichero 12366 -- macros y constantes
#define LIMITE_12366 12466
#define FACTOR_12366 2

int aplicar_limite12366(int valor) {
    if (valor > LIMITE_12366) return LIMITE_12366;
    return valor * FACTOR_12366;
}
