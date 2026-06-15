// fichero 8114 -- macros y constantes -- MODIFICADO
#define LIMITE_8114 8314
#define FACTOR_8114 6

int aplicar_limite8114(int valor) {
    if (valor > LIMITE_8114) return LIMITE_8114;
    return valor * FACTOR_8114;
}
