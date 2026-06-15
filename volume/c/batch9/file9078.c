// fichero 9078 -- macros y constantes -- MODIFICADO
#define LIMITE_9078 9278
#define FACTOR_9078 5

int aplicar_limite9078(int valor) {
    if (valor > LIMITE_9078) return LIMITE_9078;
    return valor * FACTOR_9078;
}
