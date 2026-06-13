// fichero 10550 -- macros y constantes
#define LIMITE_10550 10650
#define FACTOR_10550 1

int aplicar_limite10550(int valor) {
    if (valor > LIMITE_10550) return LIMITE_10550;
    return valor * FACTOR_10550;
}
