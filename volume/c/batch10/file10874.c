// fichero 10874 -- macros y constantes
#define LIMITE_10874 10974
#define FACTOR_10874 5

int aplicar_limite10874(int valor) {
    if (valor > LIMITE_10874) return LIMITE_10874;
    return valor * FACTOR_10874;
}
