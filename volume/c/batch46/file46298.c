// fichero 46298 -- macros y constantes
#define LIMITE_46298 46398
#define FACTOR_46298 4

int aplicar_limite46298(int valor) {
    if (valor > LIMITE_46298) return LIMITE_46298;
    return valor * FACTOR_46298;
}
