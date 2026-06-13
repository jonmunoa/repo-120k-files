// fichero 13550 -- macros y constantes
#define LIMITE_13550 13650
#define FACTOR_13550 1

int aplicar_limite13550(int valor) {
    if (valor > LIMITE_13550) return LIMITE_13550;
    return valor * FACTOR_13550;
}
