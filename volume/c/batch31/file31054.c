// fichero 31054 -- macros y constantes -- MODIFICADO
#define LIMITE_31054 31254
#define FACTOR_31054 6

int aplicar_limite31054(int valor) {
    if (valor > LIMITE_31054) return LIMITE_31054;
    return valor * FACTOR_31054;
}
