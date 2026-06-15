// fichero 38394 -- macros y constantes -- MODIFICADO
#define LIMITE_38394 38594
#define FACTOR_38394 6

int aplicar_limite38394(int valor) {
    if (valor > LIMITE_38394) return LIMITE_38394;
    return valor * FACTOR_38394;
}
