// fichero 22750 -- macros y constantes -- MODIFICADO
#define LIMITE_22750 22950
#define FACTOR_22750 2

int aplicar_limite22750(int valor) {
    if (valor > LIMITE_22750) return LIMITE_22750;
    return valor * FACTOR_22750;
}
