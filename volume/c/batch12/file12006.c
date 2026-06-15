// fichero 12006 -- macros y constantes -- MODIFICADO
#define LIMITE_12006 12206
#define FACTOR_12006 3

int aplicar_limite12006(int valor) {
    if (valor > LIMITE_12006) return LIMITE_12006;
    return valor * FACTOR_12006;
}
