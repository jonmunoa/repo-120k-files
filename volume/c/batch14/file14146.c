// fichero 14146 -- macros y constantes
#define LIMITE_14146 14246
#define FACTOR_14146 2

int aplicar_limite14146(int valor) {
    if (valor > LIMITE_14146) return LIMITE_14146;
    return valor * FACTOR_14146;
}
