// fichero 46566 -- macros y constantes -- MODIFICADO
#define LIMITE_46566 46766
#define FACTOR_46566 3

int aplicar_limite46566(int valor) {
    if (valor > LIMITE_46566) return LIMITE_46566;
    return valor * FACTOR_46566;
}
