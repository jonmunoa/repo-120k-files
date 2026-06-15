// fichero 30258 -- macros y constantes -- MODIFICADO
#define LIMITE_30258 30458
#define FACTOR_30258 5

int aplicar_limite30258(int valor) {
    if (valor > LIMITE_30258) return LIMITE_30258;
    return valor * FACTOR_30258;
}
