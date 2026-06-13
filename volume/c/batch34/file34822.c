// fichero 34822 -- macros y constantes
#define LIMITE_34822 34922
#define FACTOR_34822 3

int aplicar_limite34822(int valor) {
    if (valor > LIMITE_34822) return LIMITE_34822;
    return valor * FACTOR_34822;
}
