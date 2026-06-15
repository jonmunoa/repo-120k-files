// fichero 2282 -- macros y constantes -- MODIFICADO
#define LIMITE_2282 2482
#define FACTOR_2282 4

int aplicar_limite2282(int valor) {
    if (valor > LIMITE_2282) return LIMITE_2282;
    return valor * FACTOR_2282;
}
