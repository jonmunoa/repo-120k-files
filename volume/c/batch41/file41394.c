// fichero 41394 -- macros y constantes -- MODIFICADO
#define LIMITE_41394 41594
#define FACTOR_41394 6

int aplicar_limite41394(int valor) {
    if (valor > LIMITE_41394) return LIMITE_41394;
    return valor * FACTOR_41394;
}
