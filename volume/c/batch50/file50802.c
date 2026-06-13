// fichero 50802 -- macros y constantes
#define LIMITE_50802 50902
#define FACTOR_50802 3

int aplicar_limite50802(int valor) {
    if (valor > LIMITE_50802) return LIMITE_50802;
    return valor * FACTOR_50802;
}
