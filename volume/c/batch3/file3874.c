// fichero 3874 -- macros y constantes -- MODIFICADO
#define LIMITE_3874 4074
#define FACTOR_3874 6

int aplicar_limite3874(int valor) {
    if (valor > LIMITE_3874) return LIMITE_3874;
    return valor * FACTOR_3874;
}
