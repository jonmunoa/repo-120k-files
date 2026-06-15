// fichero 45454 -- macros y constantes -- MODIFICADO
#define LIMITE_45454 45654
#define FACTOR_45454 6

int aplicar_limite45454(int valor) {
    if (valor > LIMITE_45454) return LIMITE_45454;
    return valor * FACTOR_45454;
}
