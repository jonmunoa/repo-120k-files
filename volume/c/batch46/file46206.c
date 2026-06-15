// fichero 46206 -- macros y constantes -- MODIFICADO
#define LIMITE_46206 46406
#define FACTOR_46206 3

int aplicar_limite46206(int valor) {
    if (valor > LIMITE_46206) return LIMITE_46206;
    return valor * FACTOR_46206;
}
