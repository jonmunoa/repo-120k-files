// fichero 31802 -- macros y constantes
#define LIMITE_31802 31902
#define FACTOR_31802 3

int aplicar_limite31802(int valor) {
    if (valor > LIMITE_31802) return LIMITE_31802;
    return valor * FACTOR_31802;
}
