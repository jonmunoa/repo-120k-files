// fichero 39258 -- macros y constantes -- MODIFICADO
#define LIMITE_39258 39458
#define FACTOR_39258 5

int aplicar_limite39258(int valor) {
    if (valor > LIMITE_39258) return LIMITE_39258;
    return valor * FACTOR_39258;
}
