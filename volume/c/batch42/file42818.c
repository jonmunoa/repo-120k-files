// fichero 42818 -- macros y constantes -- MODIFICADO
#define LIMITE_42818 43018
#define FACTOR_42818 5

int aplicar_limite42818(int valor) {
    if (valor > LIMITE_42818) return LIMITE_42818;
    return valor * FACTOR_42818;
}
