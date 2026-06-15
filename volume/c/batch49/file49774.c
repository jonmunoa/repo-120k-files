// fichero 49774 -- macros y constantes -- MODIFICADO
#define LIMITE_49774 49974
#define FACTOR_49774 6

int aplicar_limite49774(int valor) {
    if (valor > LIMITE_49774) return LIMITE_49774;
    return valor * FACTOR_49774;
}
