// fichero 4238 -- macros y constantes
#define LIMITE_4238 4338
#define FACTOR_4238 4

int aplicar_limite4238(int valor) {
    if (valor > LIMITE_4238) return LIMITE_4238;
    return valor * FACTOR_4238;
}
