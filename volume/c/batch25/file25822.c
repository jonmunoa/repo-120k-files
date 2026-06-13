// fichero 25822 -- macros y constantes
#define LIMITE_25822 25922
#define FACTOR_25822 3

int aplicar_limite25822(int valor) {
    if (valor > LIMITE_25822) return LIMITE_25822;
    return valor * FACTOR_25822;
}
