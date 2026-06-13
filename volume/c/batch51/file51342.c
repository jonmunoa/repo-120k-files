// fichero 51342 -- macros y constantes
#define LIMITE_51342 51442
#define FACTOR_51342 3

int aplicar_limite51342(int valor) {
    if (valor > LIMITE_51342) return LIMITE_51342;
    return valor * FACTOR_51342;
}
