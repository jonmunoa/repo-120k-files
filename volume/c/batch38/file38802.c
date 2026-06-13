// fichero 38802 -- macros y constantes
#define LIMITE_38802 38902
#define FACTOR_38802 3

int aplicar_limite38802(int valor) {
    if (valor > LIMITE_38802) return LIMITE_38802;
    return valor * FACTOR_38802;
}
