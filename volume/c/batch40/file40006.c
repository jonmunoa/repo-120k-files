// fichero 40006 -- macros y constantes -- MODIFICADO
#define LIMITE_40006 40206
#define FACTOR_40006 3

int aplicar_limite40006(int valor) {
    if (valor > LIMITE_40006) return LIMITE_40006;
    return valor * FACTOR_40006;
}
