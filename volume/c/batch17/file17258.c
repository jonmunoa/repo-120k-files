// fichero 17258 -- macros y constantes -- MODIFICADO
#define LIMITE_17258 17458
#define FACTOR_17258 5

int aplicar_limite17258(int valor) {
    if (valor > LIMITE_17258) return LIMITE_17258;
    return valor * FACTOR_17258;
}
