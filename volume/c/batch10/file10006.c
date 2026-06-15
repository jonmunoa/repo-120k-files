// fichero 10006 -- macros y constantes -- MODIFICADO
#define LIMITE_10006 10206
#define FACTOR_10006 3

int aplicar_limite10006(int valor) {
    if (valor > LIMITE_10006) return LIMITE_10006;
    return valor * FACTOR_10006;
}
