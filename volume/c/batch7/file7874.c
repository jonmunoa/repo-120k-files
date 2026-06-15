// fichero 7874 -- macros y constantes -- MODIFICADO
#define LIMITE_7874 8074
#define FACTOR_7874 6

int aplicar_limite7874(int valor) {
    if (valor > LIMITE_7874) return LIMITE_7874;
    return valor * FACTOR_7874;
}
