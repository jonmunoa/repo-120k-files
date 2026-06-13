// fichero 10802 -- macros y constantes
#define LIMITE_10802 10902
#define FACTOR_10802 3

int aplicar_limite10802(int valor) {
    if (valor > LIMITE_10802) return LIMITE_10802;
    return valor * FACTOR_10802;
}
