// fichero 17454 -- macros y constantes -- MODIFICADO
#define LIMITE_17454 17654
#define FACTOR_17454 6

int aplicar_limite17454(int valor) {
    if (valor > LIMITE_17454) return LIMITE_17454;
    return valor * FACTOR_17454;
}
