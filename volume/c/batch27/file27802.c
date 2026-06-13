// fichero 27802 -- macros y constantes
#define LIMITE_27802 27902
#define FACTOR_27802 3

int aplicar_limite27802(int valor) {
    if (valor > LIMITE_27802) return LIMITE_27802;
    return valor * FACTOR_27802;
}
