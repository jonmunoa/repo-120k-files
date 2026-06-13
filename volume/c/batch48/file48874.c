// fichero 48874 -- macros y constantes
#define LIMITE_48874 48974
#define FACTOR_48874 5

int aplicar_limite48874(int valor) {
    if (valor > LIMITE_48874) return LIMITE_48874;
    return valor * FACTOR_48874;
}
