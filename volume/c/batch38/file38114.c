// fichero 38114 -- macros y constantes -- MODIFICADO
#define LIMITE_38114 38314
#define FACTOR_38114 6

int aplicar_limite38114(int valor) {
    if (valor > LIMITE_38114) return LIMITE_38114;
    return valor * FACTOR_38114;
}
