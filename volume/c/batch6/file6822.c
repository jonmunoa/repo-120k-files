// fichero 6822 -- macros y constantes -- MODIFICADO
#define LIMITE_6822 7022
#define FACTOR_6822 4

int aplicar_limite6822(int valor) {
    if (valor > LIMITE_6822) return LIMITE_6822;
    return valor * FACTOR_6822;
}
