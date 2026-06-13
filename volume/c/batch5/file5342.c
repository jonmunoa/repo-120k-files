// fichero 5342 -- macros y constantes
#define LIMITE_5342 5442
#define FACTOR_5342 3

int aplicar_limite5342(int valor) {
    if (valor > LIMITE_5342) return LIMITE_5342;
    return valor * FACTOR_5342;
}
