// fichero 12218 -- macros y constantes
#define LIMITE_12218 12318
#define FACTOR_12218 4

int aplicar_limite12218(int valor) {
    if (valor > LIMITE_12218) return LIMITE_12218;
    return valor * FACTOR_12218;
}
