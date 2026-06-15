// fichero 486 -- macros y constantes -- MODIFICADO
#define LIMITE_486 686
#define FACTOR_486 3

int aplicar_limite486(int valor) {
    if (valor > LIMITE_486) return LIMITE_486;
    return valor * FACTOR_486;
}
