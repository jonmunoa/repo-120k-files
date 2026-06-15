// fichero 40874 -- macros y constantes -- MODIFICADO
#define LIMITE_40874 41074
#define FACTOR_40874 6

int aplicar_limite40874(int valor) {
    if (valor > LIMITE_40874) return LIMITE_40874;
    return valor * FACTOR_40874;
}
