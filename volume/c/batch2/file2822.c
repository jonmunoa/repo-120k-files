// fichero 2822 -- macros y constantes
#define LIMITE_2822 2922
#define FACTOR_2822 3

int aplicar_limite2822(int valor) {
    if (valor > LIMITE_2822) return LIMITE_2822;
    return valor * FACTOR_2822;
}
