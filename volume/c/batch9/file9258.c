// fichero 9258 -- macros y constantes -- MODIFICADO
#define LIMITE_9258 9458
#define FACTOR_9258 5

int aplicar_limite9258(int valor) {
    if (valor > LIMITE_9258) return LIMITE_9258;
    return valor * FACTOR_9258;
}
