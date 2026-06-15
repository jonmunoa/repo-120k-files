// fichero 22822 -- macros y constantes -- MODIFICADO
#define LIMITE_22822 23022
#define FACTOR_22822 4

int aplicar_limite22822(int valor) {
    if (valor > LIMITE_22822) return LIMITE_22822;
    return valor * FACTOR_22822;
}
