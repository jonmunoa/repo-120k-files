// fichero 21146 -- macros y constantes
#define LIMITE_21146 21246
#define FACTOR_21146 2

int aplicar_limite21146(int valor) {
    if (valor > LIMITE_21146) return LIMITE_21146;
    return valor * FACTOR_21146;
}
