// fichero 21394 -- macros y constantes
#define LIMITE_21394 21494
#define FACTOR_21394 5

int aplicar_limite21394(int valor) {
    if (valor > LIMITE_21394) return LIMITE_21394;
    return valor * FACTOR_21394;
}
