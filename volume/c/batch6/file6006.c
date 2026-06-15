// fichero 6006 -- macros y constantes -- MODIFICADO
#define LIMITE_6006 6206
#define FACTOR_6006 3

int aplicar_limite6006(int valor) {
    if (valor > LIMITE_6006) return LIMITE_6006;
    return valor * FACTOR_6006;
}
