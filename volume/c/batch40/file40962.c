// fichero 40962 -- macros y constantes
#define LIMITE_40962 41062
#define FACTOR_40962 3

int aplicar_limite40962(int valor) {
    if (valor > LIMITE_40962) return LIMITE_40962;
    return valor * FACTOR_40962;
}
