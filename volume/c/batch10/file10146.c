// fichero 10146 -- macros y constantes
#define LIMITE_10146 10246
#define FACTOR_10146 2

int aplicar_limite10146(int valor) {
    if (valor > LIMITE_10146) return LIMITE_10146;
    return valor * FACTOR_10146;
}
