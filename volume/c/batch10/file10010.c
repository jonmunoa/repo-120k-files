// fichero 10010 -- macros y constantes
#define LIMITE_10010 10110
#define FACTOR_10010 1

int aplicar_limite10010(int valor) {
    if (valor > LIMITE_10010) return LIMITE_10010;
    return valor * FACTOR_10010;
}
