// fichero 30006 -- macros y constantes -- MODIFICADO
#define LIMITE_30006 30206
#define FACTOR_30006 3

int aplicar_limite30006(int valor) {
    if (valor > LIMITE_30006) return LIMITE_30006;
    return valor * FACTOR_30006;
}
