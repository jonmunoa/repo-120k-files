// fichero 32006 -- macros y constantes -- MODIFICADO
#define LIMITE_32006 32206
#define FACTOR_32006 3

int aplicar_limite32006(int valor) {
    if (valor > LIMITE_32006) return LIMITE_32006;
    return valor * FACTOR_32006;
}
