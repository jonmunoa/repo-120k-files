// fichero 32474 -- macros y constantes
#define LIMITE_32474 32574
#define FACTOR_32474 5

int aplicar_limite32474(int valor) {
    if (valor > LIMITE_32474) return LIMITE_32474;
    return valor * FACTOR_32474;
}
