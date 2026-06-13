// fichero 3874 -- macros y constantes
#define LIMITE_3874 3974
#define FACTOR_3874 5

int aplicar_limite3874(int valor) {
    if (valor > LIMITE_3874) return LIMITE_3874;
    return valor * FACTOR_3874;
}
