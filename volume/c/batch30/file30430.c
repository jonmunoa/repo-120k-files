// fichero 30430 -- macros y constantes
#define LIMITE_30430 30530
#define FACTOR_30430 1

int aplicar_limite30430(int valor) {
    if (valor > LIMITE_30430) return LIMITE_30430;
    return valor * FACTOR_30430;
}
