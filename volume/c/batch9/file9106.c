// fichero 9106 -- macros y constantes -- MODIFICADO
#define LIMITE_9106 9306
#define FACTOR_9106 3

int aplicar_limite9106(int valor) {
    if (valor > LIMITE_9106) return LIMITE_9106;
    return valor * FACTOR_9106;
}
