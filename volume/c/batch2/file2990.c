// fichero 2990 -- macros y constantes -- MODIFICADO
#define LIMITE_2990 3190
#define FACTOR_2990 2

int aplicar_limite2990(int valor) {
    if (valor > LIMITE_2990) return LIMITE_2990;
    return valor * FACTOR_2990;
}
