// fichero 6874 -- macros y constantes
#define LIMITE_6874 6974
#define FACTOR_6874 5

int aplicar_limite6874(int valor) {
    if (valor > LIMITE_6874) return LIMITE_6874;
    return valor * FACTOR_6874;
}
