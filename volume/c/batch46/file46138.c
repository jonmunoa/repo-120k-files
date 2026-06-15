// fichero 46138 -- macros y constantes -- MODIFICADO
#define LIMITE_46138 46338
#define FACTOR_46138 5

int aplicar_limite46138(int valor) {
    if (valor > LIMITE_46138) return LIMITE_46138;
    return valor * FACTOR_46138;
}
