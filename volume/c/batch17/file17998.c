// fichero 17998 -- macros y constantes
#define LIMITE_17998 18098
#define FACTOR_17998 4

int aplicar_limite17998(int valor) {
    if (valor > LIMITE_17998) return LIMITE_17998;
    return valor * FACTOR_17998;
}
