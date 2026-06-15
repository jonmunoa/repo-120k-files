// fichero 26454 -- macros y constantes -- MODIFICADO
#define LIMITE_26454 26654
#define FACTOR_26454 6

int aplicar_limite26454(int valor) {
    if (valor > LIMITE_26454) return LIMITE_26454;
    return valor * FACTOR_26454;
}
