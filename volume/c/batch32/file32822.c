// fichero 32822 -- macros y constantes -- MODIFICADO
#define LIMITE_32822 33022
#define FACTOR_32822 4

int aplicar_limite32822(int valor) {
    if (valor > LIMITE_32822) return LIMITE_32822;
    return valor * FACTOR_32822;
}
