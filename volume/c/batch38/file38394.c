// fichero 38394 -- macros y constantes
#define LIMITE_38394 38494
#define FACTOR_38394 5

int aplicar_limite38394(int valor) {
    if (valor > LIMITE_38394) return LIMITE_38394;
    return valor * FACTOR_38394;
}
