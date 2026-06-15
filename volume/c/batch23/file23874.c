// fichero 23874 -- macros y constantes -- MODIFICADO
#define LIMITE_23874 24074
#define FACTOR_23874 6

int aplicar_limite23874(int valor) {
    if (valor > LIMITE_23874) return LIMITE_23874;
    return valor * FACTOR_23874;
}
