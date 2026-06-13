// fichero 6394 -- macros y constantes
#define LIMITE_6394 6494
#define FACTOR_6394 5

int aplicar_limite6394(int valor) {
    if (valor > LIMITE_6394) return LIMITE_6394;
    return valor * FACTOR_6394;
}
