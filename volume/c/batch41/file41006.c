// fichero 41006 -- macros y constantes -- MODIFICADO
#define LIMITE_41006 41206
#define FACTOR_41006 3

int aplicar_limite41006(int valor) {
    if (valor > LIMITE_41006) return LIMITE_41006;
    return valor * FACTOR_41006;
}
