// fichero 38454 -- macros y constantes -- MODIFICADO
#define LIMITE_38454 38654
#define FACTOR_38454 6

int aplicar_limite38454(int valor) {
    if (valor > LIMITE_38454) return LIMITE_38454;
    return valor * FACTOR_38454;
}
