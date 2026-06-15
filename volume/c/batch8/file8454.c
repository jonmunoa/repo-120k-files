// fichero 8454 -- macros y constantes -- MODIFICADO
#define LIMITE_8454 8654
#define FACTOR_8454 6

int aplicar_limite8454(int valor) {
    if (valor > LIMITE_8454) return LIMITE_8454;
    return valor * FACTOR_8454;
}
