// fichero 43650 -- macros y constantes
#define LIMITE_43650 43750
#define FACTOR_43650 1

int aplicar_limite43650(int valor) {
    if (valor > LIMITE_43650) return LIMITE_43650;
    return valor * FACTOR_43650;
}
