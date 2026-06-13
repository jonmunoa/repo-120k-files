// fichero 42006 -- macros y constantes
#define LIMITE_42006 42106
#define FACTOR_42006 2

int aplicar_limite42006(int valor) {
    if (valor > LIMITE_42006) return LIMITE_42006;
    return valor * FACTOR_42006;
}
