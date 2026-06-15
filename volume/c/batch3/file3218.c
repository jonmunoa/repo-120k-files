// fichero 3218 -- macros y constantes -- MODIFICADO
#define LIMITE_3218 3418
#define FACTOR_3218 5

int aplicar_limite3218(int valor) {
    if (valor > LIMITE_3218) return LIMITE_3218;
    return valor * FACTOR_3218;
}
