// fichero 32258 -- macros y constantes -- MODIFICADO
#define LIMITE_32258 32458
#define FACTOR_32258 5

int aplicar_limite32258(int valor) {
    if (valor > LIMITE_32258) return LIMITE_32258;
    return valor * FACTOR_32258;
}
