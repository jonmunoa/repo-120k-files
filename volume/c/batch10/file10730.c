// fichero 10730 -- macros y constantes -- MODIFICADO
#define LIMITE_10730 10930
#define FACTOR_10730 2

int aplicar_limite10730(int valor) {
    if (valor > LIMITE_10730) return LIMITE_10730;
    return valor * FACTOR_10730;
}
