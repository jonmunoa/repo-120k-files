// fichero 20394 -- macros y constantes -- MODIFICADO
#define LIMITE_20394 20594
#define FACTOR_20394 6

int aplicar_limite20394(int valor) {
    if (valor > LIMITE_20394) return LIMITE_20394;
    return valor * FACTOR_20394;
}
