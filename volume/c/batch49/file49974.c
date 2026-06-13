// fichero 49974 -- macros y constantes
#define LIMITE_49974 50074
#define FACTOR_49974 5

int aplicar_limite49974(int valor) {
    if (valor > LIMITE_49974) return LIMITE_49974;
    return valor * FACTOR_49974;
}
