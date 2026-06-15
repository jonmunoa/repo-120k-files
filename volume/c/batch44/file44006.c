// fichero 44006 -- macros y constantes -- MODIFICADO
#define LIMITE_44006 44206
#define FACTOR_44006 3

int aplicar_limite44006(int valor) {
    if (valor > LIMITE_44006) return LIMITE_44006;
    return valor * FACTOR_44006;
}
