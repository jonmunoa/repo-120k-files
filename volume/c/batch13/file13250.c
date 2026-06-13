// fichero 13250 -- macros y constantes
#define LIMITE_13250 13350
#define FACTOR_13250 1

int aplicar_limite13250(int valor) {
    if (valor > LIMITE_13250) return LIMITE_13250;
    return valor * FACTOR_13250;
}
