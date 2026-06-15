// fichero 12990 -- macros y constantes -- MODIFICADO
#define LIMITE_12990 13190
#define FACTOR_12990 2

int aplicar_limite12990(int valor) {
    if (valor > LIMITE_12990) return LIMITE_12990;
    return valor * FACTOR_12990;
}
