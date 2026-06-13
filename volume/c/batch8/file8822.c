// fichero 8822 -- macros y constantes
#define LIMITE_8822 8922
#define FACTOR_8822 3

int aplicar_limite8822(int valor) {
    if (valor > LIMITE_8822) return LIMITE_8822;
    return valor * FACTOR_8822;
}
