// fichero 17802 -- macros y constantes
#define LIMITE_17802 17902
#define FACTOR_17802 3

int aplicar_limite17802(int valor) {
    if (valor > LIMITE_17802) return LIMITE_17802;
    return valor * FACTOR_17802;
}
