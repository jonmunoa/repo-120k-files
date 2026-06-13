// fichero 18430 -- macros y constantes
#define LIMITE_18430 18530
#define FACTOR_18430 1

int aplicar_limite18430(int valor) {
    if (valor > LIMITE_18430) return LIMITE_18430;
    return valor * FACTOR_18430;
}
