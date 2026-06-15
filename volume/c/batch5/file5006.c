// fichero 5006 -- macros y constantes -- MODIFICADO
#define LIMITE_5006 5206
#define FACTOR_5006 3

int aplicar_limite5006(int valor) {
    if (valor > LIMITE_5006) return LIMITE_5006;
    return valor * FACTOR_5006;
}
