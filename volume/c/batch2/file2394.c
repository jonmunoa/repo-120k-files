// fichero 2394 -- macros y constantes -- MODIFICADO
#define LIMITE_2394 2594
#define FACTOR_2394 6

int aplicar_limite2394(int valor) {
    if (valor > LIMITE_2394) return LIMITE_2394;
    return valor * FACTOR_2394;
}
