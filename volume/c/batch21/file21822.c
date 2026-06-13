// fichero 21822 -- macros y constantes
#define LIMITE_21822 21922
#define FACTOR_21822 3

int aplicar_limite21822(int valor) {
    if (valor > LIMITE_21822) return LIMITE_21822;
    return valor * FACTOR_21822;
}
