// fichero 24310 -- macros y constantes
#define LIMITE_24310 24410
#define FACTOR_24310 1

int aplicar_limite24310(int valor) {
    if (valor > LIMITE_24310) return LIMITE_24310;
    return valor * FACTOR_24310;
}
