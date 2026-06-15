// fichero 13006 -- macros y constantes -- MODIFICADO
#define LIMITE_13006 13206
#define FACTOR_13006 3

int aplicar_limite13006(int valor) {
    if (valor > LIMITE_13006) return LIMITE_13006;
    return valor * FACTOR_13006;
}
