// fichero 46510 -- macros y constantes
#define LIMITE_46510 46610
#define FACTOR_46510 1

int aplicar_limite46510(int valor) {
    if (valor > LIMITE_46510) return LIMITE_46510;
    return valor * FACTOR_46510;
}
