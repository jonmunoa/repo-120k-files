// fichero 22874 -- macros y constantes -- MODIFICADO
#define LIMITE_22874 23074
#define FACTOR_22874 6

int aplicar_limite22874(int valor) {
    if (valor > LIMITE_22874) return LIMITE_22874;
    return valor * FACTOR_22874;
}
