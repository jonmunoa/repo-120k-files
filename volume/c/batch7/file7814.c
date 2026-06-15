// fichero 7814 -- macros y constantes -- MODIFICADO
#define LIMITE_7814 8014
#define FACTOR_7814 6

int aplicar_limite7814(int valor) {
    if (valor > LIMITE_7814) return LIMITE_7814;
    return valor * FACTOR_7814;
}
