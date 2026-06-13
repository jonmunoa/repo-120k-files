// fichero 23822 -- macros y constantes
#define LIMITE_23822 23922
#define FACTOR_23822 3

int aplicar_limite23822(int valor) {
    if (valor > LIMITE_23822) return LIMITE_23822;
    return valor * FACTOR_23822;
}
