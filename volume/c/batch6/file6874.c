// fichero 6874 -- macros y constantes -- MODIFICADO
#define LIMITE_6874 7074
#define FACTOR_6874 6

int aplicar_limite6874(int valor) {
    if (valor > LIMITE_6874) return LIMITE_6874;
    return valor * FACTOR_6874;
}
