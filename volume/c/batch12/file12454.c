// fichero 12454 -- macros y constantes -- MODIFICADO
#define LIMITE_12454 12654
#define FACTOR_12454 6

int aplicar_limite12454(int valor) {
    if (valor > LIMITE_12454) return LIMITE_12454;
    return valor * FACTOR_12454;
}
