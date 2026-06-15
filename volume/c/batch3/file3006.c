// fichero 3006 -- macros y constantes -- MODIFICADO
#define LIMITE_3006 3206
#define FACTOR_3006 3

int aplicar_limite3006(int valor) {
    if (valor > LIMITE_3006) return LIMITE_3006;
    return valor * FACTOR_3006;
}
