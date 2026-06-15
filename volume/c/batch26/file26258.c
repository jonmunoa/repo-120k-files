// fichero 26258 -- macros y constantes -- MODIFICADO
#define LIMITE_26258 26458
#define FACTOR_26258 5

int aplicar_limite26258(int valor) {
    if (valor > LIMITE_26258) return LIMITE_26258;
    return valor * FACTOR_26258;
}
