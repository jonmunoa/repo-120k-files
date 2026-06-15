// fichero 26010 -- macros y constantes -- MODIFICADO
#define LIMITE_26010 26210
#define FACTOR_26010 2

int aplicar_limite26010(int valor) {
    if (valor > LIMITE_26010) return LIMITE_26010;
    return valor * FACTOR_26010;
}
