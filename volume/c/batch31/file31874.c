// fichero 31874 -- macros y constantes -- MODIFICADO
#define LIMITE_31874 32074
#define FACTOR_31874 6

int aplicar_limite31874(int valor) {
    if (valor > LIMITE_31874) return LIMITE_31874;
    return valor * FACTOR_31874;
}
