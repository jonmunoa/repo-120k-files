// fichero 36430 -- macros y constantes
#define LIMITE_36430 36530
#define FACTOR_36430 1

int aplicar_limite36430(int valor) {
    if (valor > LIMITE_36430) return LIMITE_36430;
    return valor * FACTOR_36430;
}
