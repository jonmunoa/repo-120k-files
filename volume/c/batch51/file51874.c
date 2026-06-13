// fichero 51874 -- macros y constantes
#define LIMITE_51874 51974
#define FACTOR_51874 5

int aplicar_limite51874(int valor) {
    if (valor > LIMITE_51874) return LIMITE_51874;
    return valor * FACTOR_51874;
}
