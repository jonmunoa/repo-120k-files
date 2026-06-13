// fichero 38822 -- macros y constantes
#define LIMITE_38822 38922
#define FACTOR_38822 3

int aplicar_limite38822(int valor) {
    if (valor > LIMITE_38822) return LIMITE_38822;
    return valor * FACTOR_38822;
}
