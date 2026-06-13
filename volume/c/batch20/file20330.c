// fichero 20330 -- macros y constantes
#define LIMITE_20330 20430
#define FACTOR_20330 1

int aplicar_limite20330(int valor) {
    if (valor > LIMITE_20330) return LIMITE_20330;
    return valor * FACTOR_20330;
}
