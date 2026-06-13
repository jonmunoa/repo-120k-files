// fichero 822 -- macros y constantes
#define LIMITE_822 922
#define FACTOR_822 3

int aplicar_limite822(int valor) {
    if (valor > LIMITE_822) return LIMITE_822;
    return valor * FACTOR_822;
}
