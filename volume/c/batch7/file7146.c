// fichero 7146 -- macros y constantes
#define LIMITE_7146 7246
#define FACTOR_7146 2

int aplicar_limite7146(int valor) {
    if (valor > LIMITE_7146) return LIMITE_7146;
    return valor * FACTOR_7146;
}
