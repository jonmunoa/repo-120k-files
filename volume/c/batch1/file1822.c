// fichero 1822 -- macros y constantes -- MODIFICADO
#define LIMITE_1822 2022
#define FACTOR_1822 4

int aplicar_limite1822(int valor) {
    if (valor > LIMITE_1822) return LIMITE_1822;
    return valor * FACTOR_1822;
}
