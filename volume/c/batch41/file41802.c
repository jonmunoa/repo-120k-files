// fichero 41802 -- macros y constantes
#define LIMITE_41802 41902
#define FACTOR_41802 3

int aplicar_limite41802(int valor) {
    if (valor > LIMITE_41802) return LIMITE_41802;
    return valor * FACTOR_41802;
}
