// fichero 11006 -- macros y constantes -- MODIFICADO
#define LIMITE_11006 11206
#define FACTOR_11006 3

int aplicar_limite11006(int valor) {
    if (valor > LIMITE_11006) return LIMITE_11006;
    return valor * FACTOR_11006;
}
