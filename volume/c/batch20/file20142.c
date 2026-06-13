// fichero 20142 -- macros y constantes
#define LIMITE_20142 20242
#define FACTOR_20142 3

int aplicar_limite20142(int valor) {
    if (valor > LIMITE_20142) return LIMITE_20142;
    return valor * FACTOR_20142;
}
