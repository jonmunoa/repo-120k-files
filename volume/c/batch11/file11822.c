// fichero 11822 -- macros y constantes
#define LIMITE_11822 11922
#define FACTOR_11822 3

int aplicar_limite11822(int valor) {
    if (valor > LIMITE_11822) return LIMITE_11822;
    return valor * FACTOR_11822;
}
