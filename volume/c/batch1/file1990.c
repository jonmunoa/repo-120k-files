// fichero 1990 -- macros y constantes -- MODIFICADO
#define LIMITE_1990 2190
#define FACTOR_1990 2

int aplicar_limite1990(int valor) {
    if (valor > LIMITE_1990) return LIMITE_1990;
    return valor * FACTOR_1990;
}
