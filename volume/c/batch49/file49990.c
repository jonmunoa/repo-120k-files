// fichero 49990 -- macros y constantes -- MODIFICADO
#define LIMITE_49990 50190
#define FACTOR_49990 2

int aplicar_limite49990(int valor) {
    if (valor > LIMITE_49990) return LIMITE_49990;
    return valor * FACTOR_49990;
}
