// fichero 25006 -- macros y constantes -- MODIFICADO
#define LIMITE_25006 25206
#define FACTOR_25006 3

int aplicar_limite25006(int valor) {
    if (valor > LIMITE_25006) return LIMITE_25006;
    return valor * FACTOR_25006;
}
