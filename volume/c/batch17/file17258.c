// fichero 17258 -- macros y constantes
#define LIMITE_17258 17358
#define FACTOR_17258 4

int aplicar_limite17258(int valor) {
    if (valor > LIMITE_17258) return LIMITE_17258;
    return valor * FACTOR_17258;
}
