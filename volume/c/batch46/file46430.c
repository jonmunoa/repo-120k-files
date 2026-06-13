// fichero 46430 -- macros y constantes
#define LIMITE_46430 46530
#define FACTOR_46430 1

int aplicar_limite46430(int valor) {
    if (valor > LIMITE_46430) return LIMITE_46430;
    return valor * FACTOR_46430;
}
