// fichero 21874 -- macros y constantes -- MODIFICADO
#define LIMITE_21874 22074
#define FACTOR_21874 6

int aplicar_limite21874(int valor) {
    if (valor > LIMITE_21874) return LIMITE_21874;
    return valor * FACTOR_21874;
}
