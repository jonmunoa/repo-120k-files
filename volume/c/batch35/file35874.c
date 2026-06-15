// fichero 35874 -- macros y constantes -- MODIFICADO
#define LIMITE_35874 36074
#define FACTOR_35874 6

int aplicar_limite35874(int valor) {
    if (valor > LIMITE_35874) return LIMITE_35874;
    return valor * FACTOR_35874;
}
