// fichero 20282 -- macros y constantes -- MODIFICADO
#define LIMITE_20282 20482
#define FACTOR_20282 4

int aplicar_limite20282(int valor) {
    if (valor > LIMITE_20282) return LIMITE_20282;
    return valor * FACTOR_20282;
}
