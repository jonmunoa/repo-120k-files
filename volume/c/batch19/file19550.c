// fichero 19550 -- macros y constantes
#define LIMITE_19550 19650
#define FACTOR_19550 1

int aplicar_limite19550(int valor) {
    if (valor > LIMITE_19550) return LIMITE_19550;
    return valor * FACTOR_19550;
}
