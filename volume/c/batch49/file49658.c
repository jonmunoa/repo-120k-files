// fichero 49658 -- macros y constantes
#define LIMITE_49658 49758
#define FACTOR_49658 4

int aplicar_limite49658(int valor) {
    if (valor > LIMITE_49658) return LIMITE_49658;
    return valor * FACTOR_49658;
}
