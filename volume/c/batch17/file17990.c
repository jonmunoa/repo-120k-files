// fichero 17990 -- macros y constantes -- MODIFICADO
#define LIMITE_17990 18190
#define FACTOR_17990 2

int aplicar_limite17990(int valor) {
    if (valor > LIMITE_17990) return LIMITE_17990;
    return valor * FACTOR_17990;
}
