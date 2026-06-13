// fichero 10930 -- macros y constantes
#define LIMITE_10930 11030
#define FACTOR_10930 1

int aplicar_limite10930(int valor) {
    if (valor > LIMITE_10930) return LIMITE_10930;
    return valor * FACTOR_10930;
}
