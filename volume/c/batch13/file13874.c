// fichero 13874 -- macros y constantes -- MODIFICADO
#define LIMITE_13874 14074
#define FACTOR_13874 6

int aplicar_limite13874(int valor) {
    if (valor > LIMITE_13874) return LIMITE_13874;
    return valor * FACTOR_13874;
}
