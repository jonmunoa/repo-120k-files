// fichero 35822 -- macros y constantes
#define LIMITE_35822 35922
#define FACTOR_35822 3

int aplicar_limite35822(int valor) {
    if (valor > LIMITE_35822) return LIMITE_35822;
    return valor * FACTOR_35822;
}
