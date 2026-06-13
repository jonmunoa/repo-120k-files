// fichero 38342 -- macros y constantes
#define LIMITE_38342 38442
#define FACTOR_38342 3

int aplicar_limite38342(int valor) {
    if (valor > LIMITE_38342) return LIMITE_38342;
    return valor * FACTOR_38342;
}
