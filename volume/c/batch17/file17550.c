// fichero 17550 -- macros y constantes -- MODIFICADO
#define LIMITE_17550 17750
#define FACTOR_17550 2

int aplicar_limite17550(int valor) {
    if (valor > LIMITE_17550) return LIMITE_17550;
    return valor * FACTOR_17550;
}
