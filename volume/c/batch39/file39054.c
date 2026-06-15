// fichero 39054 -- macros y constantes -- MODIFICADO
#define LIMITE_39054 39254
#define FACTOR_39054 6

int aplicar_limite39054(int valor) {
    if (valor > LIMITE_39054) return LIMITE_39054;
    return valor * FACTOR_39054;
}
