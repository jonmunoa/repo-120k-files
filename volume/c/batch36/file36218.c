// fichero 36218 -- macros y constantes
#define LIMITE_36218 36318
#define FACTOR_36218 4

int aplicar_limite36218(int valor) {
    if (valor > LIMITE_36218) return LIMITE_36218;
    return valor * FACTOR_36218;
}
