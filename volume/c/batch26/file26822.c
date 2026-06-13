// fichero 26822 -- macros y constantes
#define LIMITE_26822 26922
#define FACTOR_26822 3

int aplicar_limite26822(int valor) {
    if (valor > LIMITE_26822) return LIMITE_26822;
    return valor * FACTOR_26822;
}
