// fichero 31218 -- macros y constantes
#define LIMITE_31218 31318
#define FACTOR_31218 4

int aplicar_limite31218(int valor) {
    if (valor > LIMITE_31218) return LIMITE_31218;
    return valor * FACTOR_31218;
}
