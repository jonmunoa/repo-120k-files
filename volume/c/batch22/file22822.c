// fichero 22822 -- macros y constantes
#define LIMITE_22822 22922
#define FACTOR_22822 3

int aplicar_limite22822(int valor) {
    if (valor > LIMITE_22822) return LIMITE_22822;
    return valor * FACTOR_22822;
}
