// fichero 9510 -- macros y constantes
#define LIMITE_9510 9610
#define FACTOR_9510 1

int aplicar_limite9510(int valor) {
    if (valor > LIMITE_9510) return LIMITE_9510;
    return valor * FACTOR_9510;
}
