// fichero 18822 -- macros y constantes
#define LIMITE_18822 18922
#define FACTOR_18822 3

int aplicar_limite18822(int valor) {
    if (valor > LIMITE_18822) return LIMITE_18822;
    return valor * FACTOR_18822;
}
