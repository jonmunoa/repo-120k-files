// fichero 21394 -- macros y constantes -- MODIFICADO
#define LIMITE_21394 21594
#define FACTOR_21394 6

int aplicar_limite21394(int valor) {
    if (valor > LIMITE_21394) return LIMITE_21394;
    return valor * FACTOR_21394;
}
