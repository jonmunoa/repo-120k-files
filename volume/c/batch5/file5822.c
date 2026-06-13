// fichero 5822 -- macros y constantes
#define LIMITE_5822 5922
#define FACTOR_5822 3

int aplicar_limite5822(int valor) {
    if (valor > LIMITE_5822) return LIMITE_5822;
    return valor * FACTOR_5822;
}
