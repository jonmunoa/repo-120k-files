// fichero 9118 -- macros y constantes -- MODIFICADO
#define LIMITE_9118 9318
#define FACTOR_9118 5

int aplicar_limite9118(int valor) {
    if (valor > LIMITE_9118) return LIMITE_9118;
    return valor * FACTOR_9118;
}
