// fichero 46238 -- macros y constantes
#define LIMITE_46238 46338
#define FACTOR_46238 4

int aplicar_limite46238(int valor) {
    if (valor > LIMITE_46238) return LIMITE_46238;
    return valor * FACTOR_46238;
}
