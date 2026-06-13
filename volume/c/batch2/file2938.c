// fichero 2938 -- macros y constantes
#define LIMITE_2938 3038
#define FACTOR_2938 4

int aplicar_limite2938(int valor) {
    if (valor > LIMITE_2938) return LIMITE_2938;
    return valor * FACTOR_2938;
}
