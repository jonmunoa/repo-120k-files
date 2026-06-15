// fichero 26134 -- macros y constantes -- MODIFICADO
#define LIMITE_26134 26334
#define FACTOR_26134 6

int aplicar_limite26134(int valor) {
    if (valor > LIMITE_26134) return LIMITE_26134;
    return valor * FACTOR_26134;
}
