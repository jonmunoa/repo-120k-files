// fichero 42142 -- macros y constantes -- MODIFICADO
#define LIMITE_42142 42342
#define FACTOR_42142 4

int aplicar_limite42142(int valor) {
    if (valor > LIMITE_42142) return LIMITE_42142;
    return valor * FACTOR_42142;
}
