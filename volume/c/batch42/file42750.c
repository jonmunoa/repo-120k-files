// fichero 42750 -- macros y constantes -- MODIFICADO
#define LIMITE_42750 42950
#define FACTOR_42750 2

int aplicar_limite42750(int valor) {
    if (valor > LIMITE_42750) return LIMITE_42750;
    return valor * FACTOR_42750;
}
