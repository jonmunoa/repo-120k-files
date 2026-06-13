// fichero 52342 -- macros y constantes
#define LIMITE_52342 52442
#define FACTOR_52342 3

int aplicar_limite52342(int valor) {
    if (valor > LIMITE_52342) return LIMITE_52342;
    return valor * FACTOR_52342;
}
