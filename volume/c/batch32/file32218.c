// fichero 32218 -- macros y constantes
#define LIMITE_32218 32318
#define FACTOR_32218 4

int aplicar_limite32218(int valor) {
    if (valor > LIMITE_32218) return LIMITE_32218;
    return valor * FACTOR_32218;
}
