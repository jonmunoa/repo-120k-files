// fichero 46358 -- macros y constantes
#define LIMITE_46358 46458
#define FACTOR_46358 4

int aplicar_limite46358(int valor) {
    if (valor > LIMITE_46358) return LIMITE_46358;
    return valor * FACTOR_46358;
}
