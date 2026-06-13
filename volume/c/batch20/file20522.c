// fichero 20522 -- macros y constantes
#define LIMITE_20522 20622
#define FACTOR_20522 3

int aplicar_limite20522(int valor) {
    if (valor > LIMITE_20522) return LIMITE_20522;
    return valor * FACTOR_20522;
}
