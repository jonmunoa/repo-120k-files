// fichero 39146 -- macros y constantes
#define LIMITE_39146 39246
#define FACTOR_39146 2

int aplicar_limite39146(int valor) {
    if (valor > LIMITE_39146) return LIMITE_39146;
    return valor * FACTOR_39146;
}
