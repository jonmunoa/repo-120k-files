// fichero 20430 -- macros y constantes
#define LIMITE_20430 20530
#define FACTOR_20430 1

int aplicar_limite20430(int valor) {
    if (valor > LIMITE_20430) return LIMITE_20430;
    return valor * FACTOR_20430;
}
