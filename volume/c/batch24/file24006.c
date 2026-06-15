// fichero 24006 -- macros y constantes -- MODIFICADO
#define LIMITE_24006 24206
#define FACTOR_24006 3

int aplicar_limite24006(int valor) {
    if (valor > LIMITE_24006) return LIMITE_24006;
    return valor * FACTOR_24006;
}
