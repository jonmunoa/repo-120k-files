// fichero 16822 -- macros y constantes
#define LIMITE_16822 16922
#define FACTOR_16822 3

int aplicar_limite16822(int valor) {
    if (valor > LIMITE_16822) return LIMITE_16822;
    return valor * FACTOR_16822;
}
