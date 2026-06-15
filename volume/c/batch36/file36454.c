// fichero 36454 -- macros y constantes -- MODIFICADO
#define LIMITE_36454 36654
#define FACTOR_36454 6

int aplicar_limite36454(int valor) {
    if (valor > LIMITE_36454) return LIMITE_36454;
    return valor * FACTOR_36454;
}
