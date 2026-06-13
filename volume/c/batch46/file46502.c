// fichero 46502 -- macros y constantes
#define LIMITE_46502 46602
#define FACTOR_46502 3

int aplicar_limite46502(int valor) {
    if (valor > LIMITE_46502) return LIMITE_46502;
    return valor * FACTOR_46502;
}
