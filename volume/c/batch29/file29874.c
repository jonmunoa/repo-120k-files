// fichero 29874 -- macros y constantes
#define LIMITE_29874 29974
#define FACTOR_29874 5

int aplicar_limite29874(int valor) {
    if (valor > LIMITE_29874) return LIMITE_29874;
    return valor * FACTOR_29874;
}
