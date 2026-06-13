// fichero 20218 -- macros y constantes
#define LIMITE_20218 20318
#define FACTOR_20218 4

int aplicar_limite20218(int valor) {
    if (valor > LIMITE_20218) return LIMITE_20218;
    return valor * FACTOR_20218;
}
