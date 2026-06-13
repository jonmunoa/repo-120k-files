// fichero 19874 -- macros y constantes
#define LIMITE_19874 19974
#define FACTOR_19874 5

int aplicar_limite19874(int valor) {
    if (valor > LIMITE_19874) return LIMITE_19874;
    return valor * FACTOR_19874;
}
