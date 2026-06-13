// fichero 13874 -- macros y constantes
#define LIMITE_13874 13974
#define FACTOR_13874 5

int aplicar_limite13874(int valor) {
    if (valor > LIMITE_13874) return LIMITE_13874;
    return valor * FACTOR_13874;
}
