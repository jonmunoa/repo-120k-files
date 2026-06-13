// fichero 14430 -- macros y constantes
#define LIMITE_14430 14530
#define FACTOR_14430 1

int aplicar_limite14430(int valor) {
    if (valor > LIMITE_14430) return LIMITE_14430;
    return valor * FACTOR_14430;
}
