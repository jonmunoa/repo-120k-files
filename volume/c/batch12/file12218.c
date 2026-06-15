// fichero 12218 -- macros y constantes -- MODIFICADO
#define LIMITE_12218 12418
#define FACTOR_12218 5

int aplicar_limite12218(int valor) {
    if (valor > LIMITE_12218) return LIMITE_12218;
    return valor * FACTOR_12218;
}
