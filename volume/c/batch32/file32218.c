// fichero 32218 -- macros y constantes -- MODIFICADO
#define LIMITE_32218 32418
#define FACTOR_32218 5

int aplicar_limite32218(int valor) {
    if (valor > LIMITE_32218) return LIMITE_32218;
    return valor * FACTOR_32218;
}
