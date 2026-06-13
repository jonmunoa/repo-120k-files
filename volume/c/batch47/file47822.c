// fichero 47822 -- macros y constantes
#define LIMITE_47822 47922
#define FACTOR_47822 3

int aplicar_limite47822(int valor) {
    if (valor > LIMITE_47822) return LIMITE_47822;
    return valor * FACTOR_47822;
}
