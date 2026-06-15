// fichero 22282 -- macros y constantes -- MODIFICADO
#define LIMITE_22282 22482
#define FACTOR_22282 4

int aplicar_limite22282(int valor) {
    if (valor > LIMITE_22282) return LIMITE_22282;
    return valor * FACTOR_22282;
}
