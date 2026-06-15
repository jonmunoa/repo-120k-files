// fichero 11990 -- macros y constantes -- MODIFICADO
#define LIMITE_11990 12190
#define FACTOR_11990 2

int aplicar_limite11990(int valor) {
    if (valor > LIMITE_11990) return LIMITE_11990;
    return valor * FACTOR_11990;
}
