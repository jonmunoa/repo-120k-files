// fichero 46202 -- macros y constantes
#define LIMITE_46202 46302
#define FACTOR_46202 3

int aplicar_limite46202(int valor) {
    if (valor > LIMITE_46202) return LIMITE_46202;
    return valor * FACTOR_46202;
}
