// fichero 49874 -- macros y constantes
#define LIMITE_49874 49974
#define FACTOR_49874 5

int aplicar_limite49874(int valor) {
    if (valor > LIMITE_49874) return LIMITE_49874;
    return valor * FACTOR_49874;
}
