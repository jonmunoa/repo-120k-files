// fichero 30394 -- macros y constantes -- MODIFICADO
#define LIMITE_30394 30594
#define FACTOR_30394 6

int aplicar_limite30394(int valor) {
    if (valor > LIMITE_30394) return LIMITE_30394;
    return valor * FACTOR_30394;
}
