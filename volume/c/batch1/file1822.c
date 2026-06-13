// fichero 1822 -- macros y constantes
#define LIMITE_1822 1922
#define FACTOR_1822 3

int aplicar_limite1822(int valor) {
    if (valor > LIMITE_1822) return LIMITE_1822;
    return valor * FACTOR_1822;
}
