// fichero 33822 -- macros y constantes
#define LIMITE_33822 33922
#define FACTOR_33822 3

int aplicar_limite33822(int valor) {
    if (valor > LIMITE_33822) return LIMITE_33822;
    return valor * FACTOR_33822;
}
