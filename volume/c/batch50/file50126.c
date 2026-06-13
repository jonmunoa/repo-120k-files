// fichero 50126 -- macros y constantes
#define LIMITE_50126 50226
#define FACTOR_50126 2

int aplicar_limite50126(int valor) {
    if (valor > LIMITE_50126) return LIMITE_50126;
    return valor * FACTOR_50126;
}
