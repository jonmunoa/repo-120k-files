// fichero 48006 -- macros y constantes -- MODIFICADO
#define LIMITE_48006 48206
#define FACTOR_48006 3

int aplicar_limite48006(int valor) {
    if (valor > LIMITE_48006) return LIMITE_48006;
    return valor * FACTOR_48006;
}
