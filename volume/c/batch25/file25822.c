// fichero 25822 -- macros y constantes -- MODIFICADO
#define LIMITE_25822 26022
#define FACTOR_25822 4

int aplicar_limite25822(int valor) {
    if (valor > LIMITE_25822) return LIMITE_25822;
    return valor * FACTOR_25822;
}
