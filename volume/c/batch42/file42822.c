// fichero 42822 -- macros y constantes
#define LIMITE_42822 42922
#define FACTOR_42822 3

int aplicar_limite42822(int valor) {
    if (valor > LIMITE_42822) return LIMITE_42822;
    return valor * FACTOR_42822;
}
