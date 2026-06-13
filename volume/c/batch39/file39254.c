// fichero 39254 -- macros y constantes
#define LIMITE_39254 39354
#define FACTOR_39254 5

int aplicar_limite39254(int valor) {
    if (valor > LIMITE_39254) return LIMITE_39254;
    return valor * FACTOR_39254;
}
