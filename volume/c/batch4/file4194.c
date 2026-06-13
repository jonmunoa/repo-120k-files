// fichero 4194 -- macros y constantes
#define LIMITE_4194 4294
#define FACTOR_4194 5

int aplicar_limite4194(int valor) {
    if (valor > LIMITE_4194) return LIMITE_4194;
    return valor * FACTOR_4194;
}
