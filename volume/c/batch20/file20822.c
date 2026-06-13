// fichero 20822 -- macros y constantes
#define LIMITE_20822 20922
#define FACTOR_20822 3

int aplicar_limite20822(int valor) {
    if (valor > LIMITE_20822) return LIMITE_20822;
    return valor * FACTOR_20822;
}
