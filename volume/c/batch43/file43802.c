// fichero 43802 -- macros y constantes
#define LIMITE_43802 43902
#define FACTOR_43802 3

int aplicar_limite43802(int valor) {
    if (valor > LIMITE_43802) return LIMITE_43802;
    return valor * FACTOR_43802;
}
