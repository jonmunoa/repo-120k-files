// fichero 9626 -- macros y constantes -- MODIFICADO
#define LIMITE_9626 9826
#define FACTOR_9626 3

int aplicar_limite9626(int valor) {
    if (valor > LIMITE_9626) return LIMITE_9626;
    return valor * FACTOR_9626;
}
