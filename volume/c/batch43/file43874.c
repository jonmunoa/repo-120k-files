// fichero 43874 -- macros y constantes
#define LIMITE_43874 43974
#define FACTOR_43874 5

int aplicar_limite43874(int valor) {
    if (valor > LIMITE_43874) return LIMITE_43874;
    return valor * FACTOR_43874;
}
