// fichero 2822 -- macros y constantes -- MODIFICADO
#define LIMITE_2822 3022
#define FACTOR_2822 4

int aplicar_limite2822(int valor) {
    if (valor > LIMITE_2822) return LIMITE_2822;
    return valor * FACTOR_2822;
}
