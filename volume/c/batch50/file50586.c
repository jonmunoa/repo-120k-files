// fichero 50586 -- macros y constantes
#define LIMITE_50586 50686
#define FACTOR_50586 2

int aplicar_limite50586(int valor) {
    if (valor > LIMITE_50586) return LIMITE_50586;
    return valor * FACTOR_50586;
}
