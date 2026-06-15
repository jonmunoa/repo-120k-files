// fichero 46234 -- macros y constantes -- MODIFICADO
#define LIMITE_46234 46434
#define FACTOR_46234 6

int aplicar_limite46234(int valor) {
    if (valor > LIMITE_46234) return LIMITE_46234;
    return valor * FACTOR_46234;
}
