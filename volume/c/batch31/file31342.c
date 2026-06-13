// fichero 31342 -- macros y constantes
#define LIMITE_31342 31442
#define FACTOR_31342 3

int aplicar_limite31342(int valor) {
    if (valor > LIMITE_31342) return LIMITE_31342;
    return valor * FACTOR_31342;
}
