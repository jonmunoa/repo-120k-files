// fichero 10874 -- macros y constantes -- MODIFICADO
#define LIMITE_10874 11074
#define FACTOR_10874 6

int aplicar_limite10874(int valor) {
    if (valor > LIMITE_10874) return LIMITE_10874;
    return valor * FACTOR_10874;
}
