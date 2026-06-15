// fichero 38822 -- macros y constantes -- MODIFICADO
#define LIMITE_38822 39022
#define FACTOR_38822 4

int aplicar_limite38822(int valor) {
    if (valor > LIMITE_38822) return LIMITE_38822;
    return valor * FACTOR_38822;
}
