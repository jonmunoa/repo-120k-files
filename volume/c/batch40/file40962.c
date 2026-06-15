// fichero 40962 -- macros y constantes -- MODIFICADO
#define LIMITE_40962 41162
#define FACTOR_40962 4

int aplicar_limite40962(int valor) {
    if (valor > LIMITE_40962) return LIMITE_40962;
    return valor * FACTOR_40962;
}
