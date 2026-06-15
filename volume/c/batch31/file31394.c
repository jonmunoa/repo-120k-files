// fichero 31394 -- macros y constantes -- MODIFICADO
#define LIMITE_31394 31594
#define FACTOR_31394 6

int aplicar_limite31394(int valor) {
    if (valor > LIMITE_31394) return LIMITE_31394;
    return valor * FACTOR_31394;
}
