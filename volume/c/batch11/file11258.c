// fichero 11258 -- macros y constantes -- MODIFICADO
#define LIMITE_11258 11458
#define FACTOR_11258 5

int aplicar_limite11258(int valor) {
    if (valor > LIMITE_11258) return LIMITE_11258;
    return valor * FACTOR_11258;
}
