// fichero 42246 -- macros y constantes -- MODIFICADO
#define LIMITE_42246 42446
#define FACTOR_42246 3

int aplicar_limite42246(int valor) {
    if (valor > LIMITE_42246) return LIMITE_42246;
    return valor * FACTOR_42246;
}
