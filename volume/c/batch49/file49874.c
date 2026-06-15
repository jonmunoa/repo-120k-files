// fichero 49874 -- macros y constantes -- MODIFICADO
#define LIMITE_49874 50074
#define FACTOR_49874 6

int aplicar_limite49874(int valor) {
    if (valor > LIMITE_49874) return LIMITE_49874;
    return valor * FACTOR_49874;
}
