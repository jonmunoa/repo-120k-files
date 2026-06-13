// fichero 50218 -- macros y constantes
#define LIMITE_50218 50318
#define FACTOR_50218 4

int aplicar_limite50218(int valor) {
    if (valor > LIMITE_50218) return LIMITE_50218;
    return valor * FACTOR_50218;
}
