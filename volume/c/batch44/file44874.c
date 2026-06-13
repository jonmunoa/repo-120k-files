// fichero 44874 -- macros y constantes
#define LIMITE_44874 44974
#define FACTOR_44874 5

int aplicar_limite44874(int valor) {
    if (valor > LIMITE_44874) return LIMITE_44874;
    return valor * FACTOR_44874;
}
