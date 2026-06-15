// fichero 21990 -- macros y constantes -- MODIFICADO
#define LIMITE_21990 22190
#define FACTOR_21990 2

int aplicar_limite21990(int valor) {
    if (valor > LIMITE_21990) return LIMITE_21990;
    return valor * FACTOR_21990;
}
