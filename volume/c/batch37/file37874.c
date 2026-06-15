// fichero 37874 -- macros y constantes -- MODIFICADO
#define LIMITE_37874 38074
#define FACTOR_37874 6

int aplicar_limite37874(int valor) {
    if (valor > LIMITE_37874) return LIMITE_37874;
    return valor * FACTOR_37874;
}
