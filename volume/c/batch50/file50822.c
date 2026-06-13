// fichero 50822 -- macros y constantes
#define LIMITE_50822 50922
#define FACTOR_50822 3

int aplicar_limite50822(int valor) {
    if (valor > LIMITE_50822) return LIMITE_50822;
    return valor * FACTOR_50822;
}
