// fichero 28822 -- macros y constantes
#define LIMITE_28822 28922
#define FACTOR_28822 3

int aplicar_limite28822(int valor) {
    if (valor > LIMITE_28822) return LIMITE_28822;
    return valor * FACTOR_28822;
}
