// fichero 30014 -- macros y constantes -- MODIFICADO
#define LIMITE_30014 30214
#define FACTOR_30014 6

int aplicar_limite30014(int valor) {
    if (valor > LIMITE_30014) return LIMITE_30014;
    return valor * FACTOR_30014;
}
