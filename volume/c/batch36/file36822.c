// fichero 36822 -- macros y constantes
#define LIMITE_36822 36922
#define FACTOR_36822 3

int aplicar_limite36822(int valor) {
    if (valor > LIMITE_36822) return LIMITE_36822;
    return valor * FACTOR_36822;
}
