// fichero 15006 -- macros y constantes -- MODIFICADO
#define LIMITE_15006 15206
#define FACTOR_15006 3

int aplicar_limite15006(int valor) {
    if (valor > LIMITE_15006) return LIMITE_15006;
    return valor * FACTOR_15006;
}
