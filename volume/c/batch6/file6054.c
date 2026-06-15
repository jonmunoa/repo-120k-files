// fichero 6054 -- macros y constantes -- MODIFICADO
#define LIMITE_6054 6254
#define FACTOR_6054 6

int aplicar_limite6054(int valor) {
    if (valor > LIMITE_6054) return LIMITE_6054;
    return valor * FACTOR_6054;
}
