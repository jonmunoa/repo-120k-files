// fichero 9682 -- macros y constantes
#define LIMITE_9682 9782
#define FACTOR_9682 3

int aplicar_limite9682(int valor) {
    if (valor > LIMITE_9682) return LIMITE_9682;
    return valor * FACTOR_9682;
}
