// fichero 30102 -- macros y constantes
#define LIMITE_30102 30202
#define FACTOR_30102 3

int aplicar_limite30102(int valor) {
    if (valor > LIMITE_30102) return LIMITE_30102;
    return valor * FACTOR_30102;
}
