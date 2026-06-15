// fichero 41054 -- macros y constantes -- MODIFICADO
#define LIMITE_41054 41254
#define FACTOR_41054 6

int aplicar_limite41054(int valor) {
    if (valor > LIMITE_41054) return LIMITE_41054;
    return valor * FACTOR_41054;
}
