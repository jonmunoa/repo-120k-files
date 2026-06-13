// fichero 30218 -- macros y constantes
#define LIMITE_30218 30318
#define FACTOR_30218 4

int aplicar_limite30218(int valor) {
    if (valor > LIMITE_30218) return LIMITE_30218;
    return valor * FACTOR_30218;
}
