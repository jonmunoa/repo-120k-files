// fichero 16430 -- macros y constantes
#define LIMITE_16430 16530
#define FACTOR_16430 1

int aplicar_limite16430(int valor) {
    if (valor > LIMITE_16430) return LIMITE_16430;
    return valor * FACTOR_16430;
}
