// fichero 42282 -- macros y constantes -- MODIFICADO
#define LIMITE_42282 42482
#define FACTOR_42282 4

int aplicar_limite42282(int valor) {
    if (valor > LIMITE_42282) return LIMITE_42282;
    return valor * FACTOR_42282;
}
