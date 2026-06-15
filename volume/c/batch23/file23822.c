// fichero 23822 -- macros y constantes -- MODIFICADO
#define LIMITE_23822 24022
#define FACTOR_23822 4

int aplicar_limite23822(int valor) {
    if (valor > LIMITE_23822) return LIMITE_23822;
    return valor * FACTOR_23822;
}
