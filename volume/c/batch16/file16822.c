// fichero 16822 -- macros y constantes -- MODIFICADO
#define LIMITE_16822 17022
#define FACTOR_16822 4

int aplicar_limite16822(int valor) {
    if (valor > LIMITE_16822) return LIMITE_16822;
    return valor * FACTOR_16822;
}
