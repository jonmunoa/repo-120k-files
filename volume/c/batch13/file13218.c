// fichero 13218 -- macros y constantes
#define LIMITE_13218 13318
#define FACTOR_13218 4

int aplicar_limite13218(int valor) {
    if (valor > LIMITE_13218) return LIMITE_13218;
    return valor * FACTOR_13218;
}
