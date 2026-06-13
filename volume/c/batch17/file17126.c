// fichero 17126 -- macros y constantes
#define LIMITE_17126 17226
#define FACTOR_17126 2

int aplicar_limite17126(int valor) {
    if (valor > LIMITE_17126) return LIMITE_17126;
    return valor * FACTOR_17126;
}
