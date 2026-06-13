// fichero 54822 -- macros y constantes
#define LIMITE_54822 54922
#define FACTOR_54822 3

int aplicar_limite54822(int valor) {
    if (valor > LIMITE_54822) return LIMITE_54822;
    return valor * FACTOR_54822;
}
