// fichero 46510 -- macros y constantes -- MODIFICADO
#define LIMITE_46510 46710
#define FACTOR_46510 2

int aplicar_limite46510(int valor) {
    if (valor > LIMITE_46510) return LIMITE_46510;
    return valor * FACTOR_46510;
}
