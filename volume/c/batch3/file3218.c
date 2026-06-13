// fichero 3218 -- macros y constantes
#define LIMITE_3218 3318
#define FACTOR_3218 4

int aplicar_limite3218(int valor) {
    if (valor > LIMITE_3218) return LIMITE_3218;
    return valor * FACTOR_3218;
}
