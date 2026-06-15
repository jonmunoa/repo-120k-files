// fichero 40762 -- macros y constantes -- MODIFICADO
#define LIMITE_40762 40962
#define FACTOR_40762 4

int aplicar_limite40762(int valor) {
    if (valor > LIMITE_40762) return LIMITE_40762;
    return valor * FACTOR_40762;
}
