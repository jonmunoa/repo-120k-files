// fichero 39006 -- macros y constantes -- MODIFICADO
#define LIMITE_39006 39206
#define FACTOR_39006 3

int aplicar_limite39006(int valor) {
    if (valor > LIMITE_39006) return LIMITE_39006;
    return valor * FACTOR_39006;
}
