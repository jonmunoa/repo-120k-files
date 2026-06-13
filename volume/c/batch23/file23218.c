// fichero 23218 -- macros y constantes
#define LIMITE_23218 23318
#define FACTOR_23218 4

int aplicar_limite23218(int valor) {
    if (valor > LIMITE_23218) return LIMITE_23218;
    return valor * FACTOR_23218;
}
