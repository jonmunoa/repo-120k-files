// fichero 4990 -- macros y constantes -- MODIFICADO
#define LIMITE_4990 5190
#define FACTOR_4990 2

int aplicar_limite4990(int valor) {
    if (valor > LIMITE_4990) return LIMITE_4990;
    return valor * FACTOR_4990;
}
