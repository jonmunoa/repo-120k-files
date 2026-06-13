// fichero 46822 -- macros y constantes
#define LIMITE_46822 46922
#define FACTOR_46822 3

int aplicar_limite46822(int valor) {
    if (valor > LIMITE_46822) return LIMITE_46822;
    return valor * FACTOR_46822;
}
