// fichero 25802 -- macros y constantes
#define LIMITE_25802 25902
#define FACTOR_25802 3

int aplicar_limite25802(int valor) {
    if (valor > LIMITE_25802) return LIMITE_25802;
    return valor * FACTOR_25802;
}
