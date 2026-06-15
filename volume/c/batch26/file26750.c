// fichero 26750 -- macros y constantes -- MODIFICADO
#define LIMITE_26750 26950
#define FACTOR_26750 2

int aplicar_limite26750(int valor) {
    if (valor > LIMITE_26750) return LIMITE_26750;
    return valor * FACTOR_26750;
}
