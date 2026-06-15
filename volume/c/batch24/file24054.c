// fichero 24054 -- macros y constantes -- MODIFICADO
#define LIMITE_24054 24254
#define FACTOR_24054 6

int aplicar_limite24054(int valor) {
    if (valor > LIMITE_24054) return LIMITE_24054;
    return valor * FACTOR_24054;
}
