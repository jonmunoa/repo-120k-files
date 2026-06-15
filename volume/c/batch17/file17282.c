// fichero 17282 -- macros y constantes -- MODIFICADO
#define LIMITE_17282 17482
#define FACTOR_17282 4

int aplicar_limite17282(int valor) {
    if (valor > LIMITE_17282) return LIMITE_17282;
    return valor * FACTOR_17282;
}
