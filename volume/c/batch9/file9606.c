// fichero 9606 -- macros y constantes -- MODIFICADO
#define LIMITE_9606 9806
#define FACTOR_9606 3

int aplicar_limite9606(int valor) {
    if (valor > LIMITE_9606) return LIMITE_9606;
    return valor * FACTOR_9606;
}
