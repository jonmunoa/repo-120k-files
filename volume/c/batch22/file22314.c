// fichero 22314 -- macros y constantes
#define LIMITE_22314 22414
#define FACTOR_22314 5

int aplicar_limite22314(int valor) {
    if (valor > LIMITE_22314) return LIMITE_22314;
    return valor * FACTOR_22314;
}
