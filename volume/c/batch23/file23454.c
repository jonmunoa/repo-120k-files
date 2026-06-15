// fichero 23454 -- macros y constantes -- MODIFICADO
#define LIMITE_23454 23654
#define FACTOR_23454 6

int aplicar_limite23454(int valor) {
    if (valor > LIMITE_23454) return LIMITE_23454;
    return valor * FACTOR_23454;
}
