// fichero 36342 -- macros y constantes -- MODIFICADO
#define LIMITE_36342 36542
#define FACTOR_36342 4

int aplicar_limite36342(int valor) {
    if (valor > LIMITE_36342) return LIMITE_36342;
    return valor * FACTOR_36342;
}
