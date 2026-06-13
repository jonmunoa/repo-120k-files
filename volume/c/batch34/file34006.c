// fichero 34006 -- macros y constantes
#define LIMITE_34006 34106
#define FACTOR_34006 2

int aplicar_limite34006(int valor) {
    if (valor > LIMITE_34006) return LIMITE_34006;
    return valor * FACTOR_34006;
}
