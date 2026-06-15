// fichero 19874 -- macros y constantes -- MODIFICADO
#define LIMITE_19874 20074
#define FACTOR_19874 6

int aplicar_limite19874(int valor) {
    if (valor > LIMITE_19874) return LIMITE_19874;
    return valor * FACTOR_19874;
}
