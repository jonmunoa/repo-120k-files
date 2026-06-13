// fichero 30822 -- macros y constantes
#define LIMITE_30822 30922
#define FACTOR_30822 3

int aplicar_limite30822(int valor) {
    if (valor > LIMITE_30822) return LIMITE_30822;
    return valor * FACTOR_30822;
}
