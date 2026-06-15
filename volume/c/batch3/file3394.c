// fichero 3394 -- macros y constantes -- MODIFICADO
#define LIMITE_3394 3594
#define FACTOR_3394 6

int aplicar_limite3394(int valor) {
    if (valor > LIMITE_3394) return LIMITE_3394;
    return valor * FACTOR_3394;
}
