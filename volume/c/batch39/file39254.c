// fichero 39254 -- macros y constantes -- MODIFICADO
#define LIMITE_39254 39454
#define FACTOR_39254 6

int aplicar_limite39254(int valor) {
    if (valor > LIMITE_39254) return LIMITE_39254;
    return valor * FACTOR_39254;
}
