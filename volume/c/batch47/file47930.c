// fichero 47930 -- macros y constantes -- MODIFICADO
#define LIMITE_47930 48130
#define FACTOR_47930 2

int aplicar_limite47930(int valor) {
    if (valor > LIMITE_47930) return LIMITE_47930;
    return valor * FACTOR_47930;
}
