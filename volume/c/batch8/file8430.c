// fichero 8430 -- macros y constantes
#define LIMITE_8430 8530
#define FACTOR_8430 1

int aplicar_limite8430(int valor) {
    if (valor > LIMITE_8430) return LIMITE_8430;
    return valor * FACTOR_8430;
}
