// fichero 47854 -- macros y constantes
#define LIMITE_47854 47954
#define FACTOR_47854 5

int aplicar_limite47854(int valor) {
    if (valor > LIMITE_47854) return LIMITE_47854;
    return valor * FACTOR_47854;
}
