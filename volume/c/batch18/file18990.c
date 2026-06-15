// fichero 18990 -- macros y constantes -- MODIFICADO
#define LIMITE_18990 19190
#define FACTOR_18990 2

int aplicar_limite18990(int valor) {
    if (valor > LIMITE_18990) return LIMITE_18990;
    return valor * FACTOR_18990;
}
