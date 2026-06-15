// fichero 33454 -- macros y constantes -- MODIFICADO
#define LIMITE_33454 33654
#define FACTOR_33454 6

int aplicar_limite33454(int valor) {
    if (valor > LIMITE_33454) return LIMITE_33454;
    return valor * FACTOR_33454;
}
