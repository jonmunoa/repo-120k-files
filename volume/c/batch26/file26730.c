// fichero 26730 -- macros y constantes -- MODIFICADO
#define LIMITE_26730 26930
#define FACTOR_26730 2

int aplicar_limite26730(int valor) {
    if (valor > LIMITE_26730) return LIMITE_26730;
    return valor * FACTOR_26730;
}
