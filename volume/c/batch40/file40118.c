// fichero 40118 -- macros y constantes
#define LIMITE_40118 40218
#define FACTOR_40118 4

int aplicar_limite40118(int valor) {
    if (valor > LIMITE_40118) return LIMITE_40118;
    return valor * FACTOR_40118;
}
