// fichero 5114 -- macros y constantes -- MODIFICADO
#define LIMITE_5114 5314
#define FACTOR_5114 6

int aplicar_limite5114(int valor) {
    if (valor > LIMITE_5114) return LIMITE_5114;
    return valor * FACTOR_5114;
}
