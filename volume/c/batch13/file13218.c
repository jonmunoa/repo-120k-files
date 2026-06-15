// fichero 13218 -- macros y constantes -- MODIFICADO
#define LIMITE_13218 13418
#define FACTOR_13218 5

int aplicar_limite13218(int valor) {
    if (valor > LIMITE_13218) return LIMITE_13218;
    return valor * FACTOR_13218;
}
