// fichero 49454 -- macros y constantes -- MODIFICADO
#define LIMITE_49454 49654
#define FACTOR_49454 6

int aplicar_limite49454(int valor) {
    if (valor > LIMITE_49454) return LIMITE_49454;
    return valor * FACTOR_49454;
}
