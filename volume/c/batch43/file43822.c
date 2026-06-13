// fichero 43822 -- macros y constantes
#define LIMITE_43822 43922
#define FACTOR_43822 3

int aplicar_limite43822(int valor) {
    if (valor > LIMITE_43822) return LIMITE_43822;
    return valor * FACTOR_43822;
}
