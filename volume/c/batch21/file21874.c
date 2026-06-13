// fichero 21874 -- macros y constantes
#define LIMITE_21874 21974
#define FACTOR_21874 5

int aplicar_limite21874(int valor) {
    if (valor > LIMITE_21874) return LIMITE_21874;
    return valor * FACTOR_21874;
}
