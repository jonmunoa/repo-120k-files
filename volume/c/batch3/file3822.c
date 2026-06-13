// fichero 3822 -- macros y constantes
#define LIMITE_3822 3922
#define FACTOR_3822 3

int aplicar_limite3822(int valor) {
    if (valor > LIMITE_3822) return LIMITE_3822;
    return valor * FACTOR_3822;
}
