// fichero 31114 -- macros y constantes -- MODIFICADO
#define LIMITE_31114 31314
#define FACTOR_31114 6

int aplicar_limite31114(int valor) {
    if (valor > LIMITE_31114) return LIMITE_31114;
    return valor * FACTOR_31114;
}
