// fichero 5802 -- macros y constantes
#define LIMITE_5802 5902
#define FACTOR_5802 3

int aplicar_limite5802(int valor) {
    if (valor > LIMITE_5802) return LIMITE_5802;
    return valor * FACTOR_5802;
}
