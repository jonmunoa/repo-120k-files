// fichero 36006 -- macros y constantes -- MODIFICADO
#define LIMITE_36006 36206
#define FACTOR_36006 3

int aplicar_limite36006(int valor) {
    if (valor > LIMITE_36006) return LIMITE_36006;
    return valor * FACTOR_36006;
}
