// fichero 47430 -- macros y constantes
#define LIMITE_47430 47530
#define FACTOR_47430 1

int aplicar_limite47430(int valor) {
    if (valor > LIMITE_47430) return LIMITE_47430;
    return valor * FACTOR_47430;
}
