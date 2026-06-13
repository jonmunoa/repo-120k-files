// fichero 14822 -- macros y constantes
#define LIMITE_14822 14922
#define FACTOR_14822 3

int aplicar_limite14822(int valor) {
    if (valor > LIMITE_14822) return LIMITE_14822;
    return valor * FACTOR_14822;
}
