// fichero 42802 -- macros y constantes
#define LIMITE_42802 42902
#define FACTOR_42802 3

int aplicar_limite42802(int valor) {
    if (valor > LIMITE_42802) return LIMITE_42802;
    return valor * FACTOR_42802;
}
