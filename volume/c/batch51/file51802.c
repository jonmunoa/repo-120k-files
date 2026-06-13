// fichero 51802 -- macros y constantes
#define LIMITE_51802 51902
#define FACTOR_51802 3

int aplicar_limite51802(int valor) {
    if (valor > LIMITE_51802) return LIMITE_51802;
    return valor * FACTOR_51802;
}
