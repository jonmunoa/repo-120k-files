// fichero 44822 -- macros y constantes
#define LIMITE_44822 44922
#define FACTOR_44822 3

int aplicar_limite44822(int valor) {
    if (valor > LIMITE_44822) return LIMITE_44822;
    return valor * FACTOR_44822;
}
