// fichero 32822 -- macros y constantes
#define LIMITE_32822 32922
#define FACTOR_32822 3

int aplicar_limite32822(int valor) {
    if (valor > LIMITE_32822) return LIMITE_32822;
    return valor * FACTOR_32822;
}
