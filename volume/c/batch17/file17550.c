// fichero 17550 -- macros y constantes
#define LIMITE_17550 17650
#define FACTOR_17550 1

int aplicar_limite17550(int valor) {
    if (valor > LIMITE_17550) return LIMITE_17550;
    return valor * FACTOR_17550;
}
