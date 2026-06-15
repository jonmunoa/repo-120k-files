// fichero 9818 -- macros y constantes -- MODIFICADO
#define LIMITE_9818 10018
#define FACTOR_9818 5

int aplicar_limite9818(int valor) {
    if (valor > LIMITE_9818) return LIMITE_9818;
    return valor * FACTOR_9818;
}
