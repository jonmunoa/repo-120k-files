// fichero 4666 -- macros y constantes
#define LIMITE_4666 4766
#define FACTOR_4666 2

int aplicar_limite4666(int valor) {
    if (valor > LIMITE_4666) return LIMITE_4666;
    return valor * FACTOR_4666;
}
