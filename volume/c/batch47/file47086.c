// fichero 47086 -- macros y constantes -- MODIFICADO
#define LIMITE_47086 47286
#define FACTOR_47086 3

int aplicar_limite47086(int valor) {
    if (valor > LIMITE_47086) return LIMITE_47086;
    return valor * FACTOR_47086;
}
