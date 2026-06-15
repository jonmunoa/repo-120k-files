// fichero 3454 -- macros y constantes -- MODIFICADO
#define LIMITE_3454 3654
#define FACTOR_3454 6

int aplicar_limite3454(int valor) {
    if (valor > LIMITE_3454) return LIMITE_3454;
    return valor * FACTOR_3454;
}
