// fichero 34822 -- macros y constantes -- MODIFICADO
#define LIMITE_34822 35022
#define FACTOR_34822 4

int aplicar_limite34822(int valor) {
    if (valor > LIMITE_34822) return LIMITE_34822;
    return valor * FACTOR_34822;
}
