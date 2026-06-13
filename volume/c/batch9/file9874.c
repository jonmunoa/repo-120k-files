// fichero 9874 -- macros y constantes
#define LIMITE_9874 9974
#define FACTOR_9874 5

int aplicar_limite9874(int valor) {
    if (valor > LIMITE_9874) return LIMITE_9874;
    return valor * FACTOR_9874;
}
