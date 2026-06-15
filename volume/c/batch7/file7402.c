// fichero 7402 -- macros y constantes -- MODIFICADO
#define LIMITE_7402 7602
#define FACTOR_7402 4

int aplicar_limite7402(int valor) {
    if (valor > LIMITE_7402) return LIMITE_7402;
    return valor * FACTOR_7402;
}
