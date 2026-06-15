// fichero 43874 -- macros y constantes -- MODIFICADO
#define LIMITE_43874 44074
#define FACTOR_43874 6

int aplicar_limite43874(int valor) {
    if (valor > LIMITE_43874) return LIMITE_43874;
    return valor * FACTOR_43874;
}
