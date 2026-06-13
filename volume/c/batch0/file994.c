// fichero 994 -- macros y constantes
#define LIMITE_994 1094
#define FACTOR_994 5

int aplicar_limite994(int valor) {
    if (valor > LIMITE_994) return LIMITE_994;
    return valor * FACTOR_994;
}
