// fichero 18126 -- macros y constantes
#define LIMITE_18126 18226
#define FACTOR_18126 2

int aplicar_limite18126(int valor) {
    if (valor > LIMITE_18126) return LIMITE_18126;
    return valor * FACTOR_18126;
}
