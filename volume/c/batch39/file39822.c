// fichero 39822 -- macros y constantes
#define LIMITE_39822 39922
#define FACTOR_39822 3

int aplicar_limite39822(int valor) {
    if (valor > LIMITE_39822) return LIMITE_39822;
    return valor * FACTOR_39822;
}
