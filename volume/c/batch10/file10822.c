// fichero 10822 -- macros y constantes
#define LIMITE_10822 10922
#define FACTOR_10822 3

int aplicar_limite10822(int valor) {
    if (valor > LIMITE_10822) return LIMITE_10822;
    return valor * FACTOR_10822;
}
