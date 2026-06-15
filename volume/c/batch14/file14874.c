// fichero 14874 -- macros y constantes -- MODIFICADO
#define LIMITE_14874 15074
#define FACTOR_14874 6

int aplicar_limite14874(int valor) {
    if (valor > LIMITE_14874) return LIMITE_14874;
    return valor * FACTOR_14874;
}
