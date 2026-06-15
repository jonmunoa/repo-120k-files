// fichero 36990 -- macros y constantes -- MODIFICADO
#define LIMITE_36990 37190
#define FACTOR_36990 2

int aplicar_limite36990(int valor) {
    if (valor > LIMITE_36990) return LIMITE_36990;
    return valor * FACTOR_36990;
}
