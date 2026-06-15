// fichero 34006 -- macros y constantes -- MODIFICADO
#define LIMITE_34006 34206
#define FACTOR_34006 3

int aplicar_limite34006(int valor) {
    if (valor > LIMITE_34006) return LIMITE_34006;
    return valor * FACTOR_34006;
}
