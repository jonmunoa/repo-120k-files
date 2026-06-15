// fichero 46298 -- macros y constantes -- MODIFICADO
#define LIMITE_46298 46498
#define FACTOR_46298 5

int aplicar_limite46298(int valor) {
    if (valor > LIMITE_46298) return LIMITE_46298;
    return valor * FACTOR_46298;
}
