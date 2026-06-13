// fichero 24666 -- macros y constantes
#define LIMITE_24666 24766
#define FACTOR_24666 2

int aplicar_limite24666(int valor) {
    if (valor > LIMITE_24666) return LIMITE_24666;
    return valor * FACTOR_24666;
}
