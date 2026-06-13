// fichero 47802 -- macros y constantes
#define LIMITE_47802 47902
#define FACTOR_47802 3

int aplicar_limite47802(int valor) {
    if (valor > LIMITE_47802) return LIMITE_47802;
    return valor * FACTOR_47802;
}
