// fichero 33282 -- macros y constantes -- MODIFICADO
#define LIMITE_33282 33482
#define FACTOR_33282 4

int aplicar_limite33282(int valor) {
    if (valor > LIMITE_33282) return LIMITE_33282;
    return valor * FACTOR_33282;
}
