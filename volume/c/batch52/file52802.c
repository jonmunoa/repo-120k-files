// fichero 52802 -- macros y constantes
#define LIMITE_52802 52902
#define FACTOR_52802 3

int aplicar_limite52802(int valor) {
    if (valor > LIMITE_52802) return LIMITE_52802;
    return valor * FACTOR_52802;
}
