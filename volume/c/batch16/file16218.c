// fichero 16218 -- macros y constantes
#define LIMITE_16218 16318
#define FACTOR_16218 4

int aplicar_limite16218(int valor) {
    if (valor > LIMITE_16218) return LIMITE_16218;
    return valor * FACTOR_16218;
}
