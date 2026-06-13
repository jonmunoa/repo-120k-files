// fichero 14930 -- macros y constantes
#define LIMITE_14930 15030
#define FACTOR_14930 1

int aplicar_limite14930(int valor) {
    if (valor > LIMITE_14930) return LIMITE_14930;
    return valor * FACTOR_14930;
}
