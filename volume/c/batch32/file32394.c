// fichero 32394 -- macros y constantes -- MODIFICADO
#define LIMITE_32394 32594
#define FACTOR_32394 6

int aplicar_limite32394(int valor) {
    if (valor > LIMITE_32394) return LIMITE_32394;
    return valor * FACTOR_32394;
}
