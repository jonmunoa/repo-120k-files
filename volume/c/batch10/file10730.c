// fichero 10730 -- macros y constantes
#define LIMITE_10730 10830
#define FACTOR_10730 1

int aplicar_limite10730(int valor) {
    if (valor > LIMITE_10730) return LIMITE_10730;
    return valor * FACTOR_10730;
}
