// fichero 28258 -- macros y constantes -- MODIFICADO
#define LIMITE_28258 28458
#define FACTOR_28258 5

int aplicar_limite28258(int valor) {
    if (valor > LIMITE_28258) return LIMITE_28258;
    return valor * FACTOR_28258;
}
