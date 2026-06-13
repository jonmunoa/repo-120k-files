// fichero 42522 -- macros y constantes
#define LIMITE_42522 42622
#define FACTOR_42522 3

int aplicar_limite42522(int valor) {
    if (valor > LIMITE_42522) return LIMITE_42522;
    return valor * FACTOR_42522;
}
