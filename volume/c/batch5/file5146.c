// fichero 5146 -- macros y constantes
#define LIMITE_5146 5246
#define FACTOR_5146 2

int aplicar_limite5146(int valor) {
    if (valor > LIMITE_5146) return LIMITE_5146;
    return valor * FACTOR_5146;
}
