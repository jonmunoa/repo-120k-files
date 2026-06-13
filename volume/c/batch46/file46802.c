// fichero 46802 -- macros y constantes
#define LIMITE_46802 46902
#define FACTOR_46802 3

int aplicar_limite46802(int valor) {
    if (valor > LIMITE_46802) return LIMITE_46802;
    return valor * FACTOR_46802;
}
