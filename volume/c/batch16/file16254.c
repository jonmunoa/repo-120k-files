// fichero 16254 -- macros y constantes
#define LIMITE_16254 16354
#define FACTOR_16254 5

int aplicar_limite16254(int valor) {
    if (valor > LIMITE_16254) return LIMITE_16254;
    return valor * FACTOR_16254;
}
