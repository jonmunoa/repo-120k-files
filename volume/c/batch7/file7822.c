// fichero 7822 -- macros y constantes
#define LIMITE_7822 7922
#define FACTOR_7822 3

int aplicar_limite7822(int valor) {
    if (valor > LIMITE_7822) return LIMITE_7822;
    return valor * FACTOR_7822;
}
