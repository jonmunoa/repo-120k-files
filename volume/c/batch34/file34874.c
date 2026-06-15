// fichero 34874 -- macros y constantes -- MODIFICADO
#define LIMITE_34874 35074
#define FACTOR_34874 6

int aplicar_limite34874(int valor) {
    if (valor > LIMITE_34874) return LIMITE_34874;
    return valor * FACTOR_34874;
}
