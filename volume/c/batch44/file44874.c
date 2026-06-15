// fichero 44874 -- macros y constantes -- MODIFICADO
#define LIMITE_44874 45074
#define FACTOR_44874 6

int aplicar_limite44874(int valor) {
    if (valor > LIMITE_44874) return LIMITE_44874;
    return valor * FACTOR_44874;
}
