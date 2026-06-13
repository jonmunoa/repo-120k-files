// fichero 5126 -- macros y constantes
#define LIMITE_5126 5226
#define FACTOR_5126 2

int aplicar_limite5126(int valor) {
    if (valor > LIMITE_5126) return LIMITE_5126;
    return valor * FACTOR_5126;
}
