// fichero 14274 -- macros y constantes
#define LIMITE_14274 14374
#define FACTOR_14274 5

int aplicar_limite14274(int valor) {
    if (valor > LIMITE_14274) return LIMITE_14274;
    return valor * FACTOR_14274;
}
