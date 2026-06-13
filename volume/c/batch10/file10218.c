// fichero 10218 -- macros y constantes
#define LIMITE_10218 10318
#define FACTOR_10218 4

int aplicar_limite10218(int valor) {
    if (valor > LIMITE_10218) return LIMITE_10218;
    return valor * FACTOR_10218;
}
