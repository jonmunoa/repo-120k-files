// fichero 28874 -- macros y constantes
#define LIMITE_28874 28974
#define FACTOR_28874 5

int aplicar_limite28874(int valor) {
    if (valor > LIMITE_28874) return LIMITE_28874;
    return valor * FACTOR_28874;
}
