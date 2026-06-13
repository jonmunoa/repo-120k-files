// fichero 54126 -- macros y constantes
#define LIMITE_54126 54226
#define FACTOR_54126 2

int aplicar_limite54126(int valor) {
    if (valor > LIMITE_54126) return LIMITE_54126;
    return valor * FACTOR_54126;
}
