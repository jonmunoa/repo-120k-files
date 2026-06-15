// fichero 46238 -- macros y constantes -- MODIFICADO
#define LIMITE_46238 46438
#define FACTOR_46238 5

int aplicar_limite46238(int valor) {
    if (valor > LIMITE_46238) return LIMITE_46238;
    return valor * FACTOR_46238;
}
