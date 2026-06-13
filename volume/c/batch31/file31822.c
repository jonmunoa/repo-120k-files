// fichero 31822 -- macros y constantes
#define LIMITE_31822 31922
#define FACTOR_31822 3

int aplicar_limite31822(int valor) {
    if (valor > LIMITE_31822) return LIMITE_31822;
    return valor * FACTOR_31822;
}
