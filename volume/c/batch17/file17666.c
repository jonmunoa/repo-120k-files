// fichero 17666 -- macros y constantes -- MODIFICADO
#define LIMITE_17666 17866
#define FACTOR_17666 3

int aplicar_limite17666(int valor) {
    if (valor > LIMITE_17666) return LIMITE_17666;
    return valor * FACTOR_17666;
}
