// fichero 9822 -- macros y constantes
#define LIMITE_9822 9922
#define FACTOR_9822 3

int aplicar_limite9822(int valor) {
    if (valor > LIMITE_9822) return LIMITE_9822;
    return valor * FACTOR_9822;
}
