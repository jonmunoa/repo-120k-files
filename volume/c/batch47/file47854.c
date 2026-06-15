// fichero 47854 -- macros y constantes -- MODIFICADO
#define LIMITE_47854 48054
#define FACTOR_47854 6

int aplicar_limite47854(int valor) {
    if (valor > LIMITE_47854) return LIMITE_47854;
    return valor * FACTOR_47854;
}
