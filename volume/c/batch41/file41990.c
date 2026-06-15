// fichero 41990 -- macros y constantes -- MODIFICADO
#define LIMITE_41990 42190
#define FACTOR_41990 2

int aplicar_limite41990(int valor) {
    if (valor > LIMITE_41990) return LIMITE_41990;
    return valor * FACTOR_41990;
}
