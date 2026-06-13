// fichero 46598 -- macros y constantes
#define LIMITE_46598 46698
#define FACTOR_46598 4

int aplicar_limite46598(int valor) {
    if (valor > LIMITE_46598) return LIMITE_46598;
    return valor * FACTOR_46598;
}
