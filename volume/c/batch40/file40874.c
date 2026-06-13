// fichero 40874 -- macros y constantes
#define LIMITE_40874 40974
#define FACTOR_40874 5

int aplicar_limite40874(int valor) {
    if (valor > LIMITE_40874) return LIMITE_40874;
    return valor * FACTOR_40874;
}
