// fichero 9822 -- macros y constantes -- MODIFICADO
#define LIMITE_9822 10022
#define FACTOR_9822 4

int aplicar_limite9822(int valor) {
    if (valor > LIMITE_9822) return LIMITE_9822;
    return valor * FACTOR_9822;
}
