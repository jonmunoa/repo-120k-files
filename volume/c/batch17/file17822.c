// fichero 17822 -- macros y constantes
#define LIMITE_17822 17922
#define FACTOR_17822 3

int aplicar_limite17822(int valor) {
    if (valor > LIMITE_17822) return LIMITE_17822;
    return valor * FACTOR_17822;
}
