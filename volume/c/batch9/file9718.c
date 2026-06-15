// fichero 9718 -- macros y constantes -- MODIFICADO
#define LIMITE_9718 9918
#define FACTOR_9718 5

int aplicar_limite9718(int valor) {
    if (valor > LIMITE_9718) return LIMITE_9718;
    return valor * FACTOR_9718;
}
