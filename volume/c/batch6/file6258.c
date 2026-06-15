// fichero 6258 -- macros y constantes -- MODIFICADO
#define LIMITE_6258 6458
#define FACTOR_6258 5

int aplicar_limite6258(int valor) {
    if (valor > LIMITE_6258) return LIMITE_6258;
    return valor * FACTOR_6258;
}
