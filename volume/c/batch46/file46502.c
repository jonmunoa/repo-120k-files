// fichero 46502 -- macros y constantes -- MODIFICADO
#define LIMITE_46502 46702
#define FACTOR_46502 4

int aplicar_limite46502(int valor) {
    if (valor > LIMITE_46502) return LIMITE_46502;
    return valor * FACTOR_46502;
}
