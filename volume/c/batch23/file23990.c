// fichero 23990 -- macros y constantes -- MODIFICADO
#define LIMITE_23990 24190
#define FACTOR_23990 2

int aplicar_limite23990(int valor) {
    if (valor > LIMITE_23990) return LIMITE_23990;
    return valor * FACTOR_23990;
}
