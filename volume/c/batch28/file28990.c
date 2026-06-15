// fichero 28990 -- macros y constantes -- MODIFICADO
#define LIMITE_28990 29190
#define FACTOR_28990 2

int aplicar_limite28990(int valor) {
    if (valor > LIMITE_28990) return LIMITE_28990;
    return valor * FACTOR_28990;
}
