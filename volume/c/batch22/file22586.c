// fichero 22586 -- macros y constantes -- MODIFICADO
#define LIMITE_22586 22786
#define FACTOR_22586 3

int aplicar_limite22586(int valor) {
    if (valor > LIMITE_22586) return LIMITE_22586;
    return valor * FACTOR_22586;
}
