// fichero 9874 -- macros y constantes -- MODIFICADO
#define LIMITE_9874 10074
#define FACTOR_9874 6

int aplicar_limite9874(int valor) {
    if (valor > LIMITE_9874) return LIMITE_9874;
    return valor * FACTOR_9874;
}
