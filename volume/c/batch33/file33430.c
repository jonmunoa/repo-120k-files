// fichero 33430 -- macros y constantes
#define LIMITE_33430 33530
#define FACTOR_33430 1

int aplicar_limite33430(int valor) {
    if (valor > LIMITE_33430) return LIMITE_33430;
    return valor * FACTOR_33430;
}
