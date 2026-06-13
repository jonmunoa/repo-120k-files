// fichero 20586 -- macros y constantes
#define LIMITE_20586 20686
#define FACTOR_20586 2

int aplicar_limite20586(int valor) {
    if (valor > LIMITE_20586) return LIMITE_20586;
    return valor * FACTOR_20586;
}
