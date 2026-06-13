// fichero 54802 -- macros y constantes
#define LIMITE_54802 54902
#define FACTOR_54802 3

int aplicar_limite54802(int valor) {
    if (valor > LIMITE_54802) return LIMITE_54802;
    return valor * FACTOR_54802;
}
