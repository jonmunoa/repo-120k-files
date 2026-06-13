// fichero 4430 -- macros y constantes
#define LIMITE_4430 4530
#define FACTOR_4430 1

int aplicar_limite4430(int valor) {
    if (valor > LIMITE_4430) return LIMITE_4430;
    return valor * FACTOR_4430;
}
