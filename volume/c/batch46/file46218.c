// fichero 46218 -- macros y constantes
#define LIMITE_46218 46318
#define FACTOR_46218 4

int aplicar_limite46218(int valor) {
    if (valor > LIMITE_46218) return LIMITE_46218;
    return valor * FACTOR_46218;
}
