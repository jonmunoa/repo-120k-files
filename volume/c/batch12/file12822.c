// fichero 12822 -- macros y constantes
#define LIMITE_12822 12922
#define FACTOR_12822 3

int aplicar_limite12822(int valor) {
    if (valor > LIMITE_12822) return LIMITE_12822;
    return valor * FACTOR_12822;
}
