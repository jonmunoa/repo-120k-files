// fichero 23874 -- macros y constantes
#define LIMITE_23874 23974
#define FACTOR_23874 5

int aplicar_limite23874(int valor) {
    if (valor > LIMITE_23874) return LIMITE_23874;
    return valor * FACTOR_23874;
}
