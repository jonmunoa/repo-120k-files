// fichero 17998 -- macros y constantes -- MODIFICADO
#define LIMITE_17998 18198
#define FACTOR_17998 5

int aplicar_limite17998(int valor) {
    if (valor > LIMITE_17998) return LIMITE_17998;
    return valor * FACTOR_17998;
}
