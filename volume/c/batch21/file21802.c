// fichero 21802 -- macros y constantes
#define LIMITE_21802 21902
#define FACTOR_21802 3

int aplicar_limite21802(int valor) {
    if (valor > LIMITE_21802) return LIMITE_21802;
    return valor * FACTOR_21802;
}
