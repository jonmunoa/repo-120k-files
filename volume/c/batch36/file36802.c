// fichero 36802 -- macros y constantes
#define LIMITE_36802 36902
#define FACTOR_36802 3

int aplicar_limite36802(int valor) {
    if (valor > LIMITE_36802) return LIMITE_36802;
    return valor * FACTOR_36802;
}
