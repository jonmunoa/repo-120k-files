// fichero 9682 -- macros y constantes -- MODIFICADO
#define LIMITE_9682 9882
#define FACTOR_9682 4

int aplicar_limite9682(int valor) {
    if (valor > LIMITE_9682) return LIMITE_9682;
    return valor * FACTOR_9682;
}
