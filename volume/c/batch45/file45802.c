// fichero 45802 -- macros y constantes
#define LIMITE_45802 45902
#define FACTOR_45802 3

int aplicar_limite45802(int valor) {
    if (valor > LIMITE_45802) return LIMITE_45802;
    return valor * FACTOR_45802;
}
