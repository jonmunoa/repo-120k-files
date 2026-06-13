// fichero 26258 -- macros y constantes
#define LIMITE_26258 26358
#define FACTOR_26258 4

int aplicar_limite26258(int valor) {
    if (valor > LIMITE_26258) return LIMITE_26258;
    return valor * FACTOR_26258;
}
