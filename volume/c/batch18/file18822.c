// fichero 18822 -- macros y constantes -- MODIFICADO
#define LIMITE_18822 19022
#define FACTOR_18822 4

int aplicar_limite18822(int valor) {
    if (valor > LIMITE_18822) return LIMITE_18822;
    return valor * FACTOR_18822;
}
