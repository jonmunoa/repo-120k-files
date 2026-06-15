// fichero 15874 -- macros y constantes -- MODIFICADO
#define LIMITE_15874 16074
#define FACTOR_15874 6

int aplicar_limite15874(int valor) {
    if (valor > LIMITE_15874) return LIMITE_15874;
    return valor * FACTOR_15874;
}
