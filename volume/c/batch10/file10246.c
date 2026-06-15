// fichero 10246 -- macros y constantes -- MODIFICADO
#define LIMITE_10246 10446
#define FACTOR_10246 3

int aplicar_limite10246(int valor) {
    if (valor > LIMITE_10246) return LIMITE_10246;
    return valor * FACTOR_10246;
}
