// fichero 4822 -- macros y constantes
#define LIMITE_4822 4922
#define FACTOR_4822 3

int aplicar_limite4822(int valor) {
    if (valor > LIMITE_4822) return LIMITE_4822;
    return valor * FACTOR_4822;
}
