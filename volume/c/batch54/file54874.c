// fichero 54874 -- macros y constantes
#define LIMITE_54874 54974
#define FACTOR_54874 5

int aplicar_limite54874(int valor) {
    if (valor > LIMITE_54874) return LIMITE_54874;
    return valor * FACTOR_54874;
}
