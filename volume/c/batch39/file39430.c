// fichero 39430 -- macros y constantes
#define LIMITE_39430 39530
#define FACTOR_39430 1

int aplicar_limite39430(int valor) {
    if (valor > LIMITE_39430) return LIMITE_39430;
    return valor * FACTOR_39430;
}
