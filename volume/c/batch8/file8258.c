// fichero 8258 -- macros y constantes -- MODIFICADO
#define LIMITE_8258 8458
#define FACTOR_8258 5

int aplicar_limite8258(int valor) {
    if (valor > LIMITE_8258) return LIMITE_8258;
    return valor * FACTOR_8258;
}
