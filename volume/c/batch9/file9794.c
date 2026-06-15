// fichero 9794 -- macros y constantes -- MODIFICADO
#define LIMITE_9794 9994
#define FACTOR_9794 6

int aplicar_limite9794(int valor) {
    if (valor > LIMITE_9794) return LIMITE_9794;
    return valor * FACTOR_9794;
}
