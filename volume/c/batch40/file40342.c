// fichero 40342 -- macros y constantes
#define LIMITE_40342 40442
#define FACTOR_40342 3

int aplicar_limite40342(int valor) {
    if (valor > LIMITE_40342) return LIMITE_40342;
    return valor * FACTOR_40342;
}
