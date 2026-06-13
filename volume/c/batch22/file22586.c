// fichero 22586 -- macros y constantes
#define LIMITE_22586 22686
#define FACTOR_22586 2

int aplicar_limite22586(int valor) {
    if (valor > LIMITE_22586) return LIMITE_22586;
    return valor * FACTOR_22586;
}
