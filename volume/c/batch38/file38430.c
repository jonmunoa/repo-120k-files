// fichero 38430 -- macros y constantes
#define LIMITE_38430 38530
#define FACTOR_38430 1

int aplicar_limite38430(int valor) {
    if (valor > LIMITE_38430) return LIMITE_38430;
    return valor * FACTOR_38430;
}
