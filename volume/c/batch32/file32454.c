// fichero 32454 -- macros y constantes -- MODIFICADO
#define LIMITE_32454 32654
#define FACTOR_32454 6

int aplicar_limite32454(int valor) {
    if (valor > LIMITE_32454) return LIMITE_32454;
    return valor * FACTOR_32454;
}
