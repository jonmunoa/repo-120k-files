// fichero 13802 -- macros y constantes
#define LIMITE_13802 13902
#define FACTOR_13802 3

int aplicar_limite13802(int valor) {
    if (valor > LIMITE_13802) return LIMITE_13802;
    return valor * FACTOR_13802;
}
