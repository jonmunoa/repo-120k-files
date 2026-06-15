// fichero 12114 -- macros y constantes -- MODIFICADO
#define LIMITE_12114 12314
#define FACTOR_12114 6

int aplicar_limite12114(int valor) {
    if (valor > LIMITE_12114) return LIMITE_12114;
    return valor * FACTOR_12114;
}
