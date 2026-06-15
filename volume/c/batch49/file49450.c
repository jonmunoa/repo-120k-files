// fichero 49450 -- macros y constantes -- MODIFICADO
#define LIMITE_49450 49650
#define FACTOR_49450 2

int aplicar_limite49450(int valor) {
    if (valor > LIMITE_49450) return LIMITE_49450;
    return valor * FACTOR_49450;
}
