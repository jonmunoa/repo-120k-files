// fichero 32254 -- macros y constantes
#define LIMITE_32254 32354
#define FACTOR_32254 5

int aplicar_limite32254(int valor) {
    if (valor > LIMITE_32254) return LIMITE_32254;
    return valor * FACTOR_32254;
}
