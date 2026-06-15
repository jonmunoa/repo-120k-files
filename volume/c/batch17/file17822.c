// fichero 17822 -- macros y constantes -- MODIFICADO
#define LIMITE_17822 18022
#define FACTOR_17822 4

int aplicar_limite17822(int valor) {
    if (valor > LIMITE_17822) return LIMITE_17822;
    return valor * FACTOR_17822;
}
