// fichero 46550 -- macros y constantes
#define LIMITE_46550 46650
#define FACTOR_46550 1

int aplicar_limite46550(int valor) {
    if (valor > LIMITE_46550) return LIMITE_46550;
    return valor * FACTOR_46550;
}
