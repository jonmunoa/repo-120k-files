// fichero 35454 -- macros y constantes -- MODIFICADO
#define LIMITE_35454 35654
#define FACTOR_35454 6

int aplicar_limite35454(int valor) {
    if (valor > LIMITE_35454) return LIMITE_35454;
    return valor * FACTOR_35454;
}
