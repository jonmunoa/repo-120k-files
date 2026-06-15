// fichero 46682 -- macros y constantes -- MODIFICADO
#define LIMITE_46682 46882
#define FACTOR_46682 4

int aplicar_limite46682(int valor) {
    if (valor > LIMITE_46682) return LIMITE_46682;
    return valor * FACTOR_46682;
}
