// fichero 42522 -- macros y constantes -- MODIFICADO
#define LIMITE_42522 42722
#define FACTOR_42522 4

int aplicar_limite42522(int valor) {
    if (valor > LIMITE_42522) return LIMITE_42522;
    return valor * FACTOR_42522;
}
