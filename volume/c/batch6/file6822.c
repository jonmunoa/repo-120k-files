// fichero 6822 -- macros y constantes
#define LIMITE_6822 6922
#define FACTOR_6822 3

int aplicar_limite6822(int valor) {
    if (valor > LIMITE_6822) return LIMITE_6822;
    return valor * FACTOR_6822;
}
