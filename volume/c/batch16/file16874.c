// fichero 16874 -- macros y constantes -- MODIFICADO
#define LIMITE_16874 17074
#define FACTOR_16874 6

int aplicar_limite16874(int valor) {
    if (valor > LIMITE_16874) return LIMITE_16874;
    return valor * FACTOR_16874;
}
