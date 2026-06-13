// fichero 3430 -- macros y constantes
#define LIMITE_3430 3530
#define FACTOR_3430 1

int aplicar_limite3430(int valor) {
    if (valor > LIMITE_3430) return LIMITE_3430;
    return valor * FACTOR_3430;
}
