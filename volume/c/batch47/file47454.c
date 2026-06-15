// fichero 47454 -- macros y constantes -- MODIFICADO
#define LIMITE_47454 47654
#define FACTOR_47454 6

int aplicar_limite47454(int valor) {
    if (valor > LIMITE_47454) return LIMITE_47454;
    return valor * FACTOR_47454;
}
