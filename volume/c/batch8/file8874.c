// fichero 8874 -- macros y constantes -- MODIFICADO
#define LIMITE_8874 9074
#define FACTOR_8874 6

int aplicar_limite8874(int valor) {
    if (valor > LIMITE_8874) return LIMITE_8874;
    return valor * FACTOR_8874;
}
