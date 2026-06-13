// fichero 46682 -- macros y constantes
#define LIMITE_46682 46782
#define FACTOR_46682 3

int aplicar_limite46682(int valor) {
    if (valor > LIMITE_46682) return LIMITE_46682;
    return valor * FACTOR_46682;
}
