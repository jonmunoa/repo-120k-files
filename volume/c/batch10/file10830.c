// fichero 10830 -- macros y constantes
#define LIMITE_10830 10930
#define FACTOR_10830 1

int aplicar_limite10830(int valor) {
    if (valor > LIMITE_10830) return LIMITE_10830;
    return valor * FACTOR_10830;
}
