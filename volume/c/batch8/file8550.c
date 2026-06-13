// fichero 8550 -- macros y constantes
#define LIMITE_8550 8650
#define FACTOR_8550 1

int aplicar_limite8550(int valor) {
    if (valor > LIMITE_8550) return LIMITE_8550;
    return valor * FACTOR_8550;
}
