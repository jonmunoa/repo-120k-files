// fichero 46770 -- macros y constantes -- MODIFICADO
#define LIMITE_46770 46970
#define FACTOR_46770 2

int aplicar_limite46770(int valor) {
    if (valor > LIMITE_46770) return LIMITE_46770;
    return valor * FACTOR_46770;
}
