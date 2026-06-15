// fichero 3822 -- macros y constantes -- MODIFICADO
#define LIMITE_3822 4022
#define FACTOR_3822 4

int aplicar_limite3822(int valor) {
    if (valor > LIMITE_3822) return LIMITE_3822;
    return valor * FACTOR_3822;
}
