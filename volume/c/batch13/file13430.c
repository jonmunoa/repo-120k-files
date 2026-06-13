// fichero 13430 -- macros y constantes
#define LIMITE_13430 13530
#define FACTOR_13430 1

int aplicar_limite13430(int valor) {
    if (valor > LIMITE_13430) return LIMITE_13430;
    return valor * FACTOR_13430;
}
