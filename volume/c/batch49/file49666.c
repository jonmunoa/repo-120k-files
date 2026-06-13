// fichero 49666 -- macros y constantes
#define LIMITE_49666 49766
#define FACTOR_49666 2

int aplicar_limite49666(int valor) {
    if (valor > LIMITE_49666) return LIMITE_49666;
    return valor * FACTOR_49666;
}
