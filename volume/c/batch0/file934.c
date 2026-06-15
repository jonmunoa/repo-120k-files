// fichero 934 -- macros y constantes -- MODIFICADO
#define LIMITE_934 1134
#define FACTOR_934 6

int aplicar_limite934(int valor) {
    if (valor > LIMITE_934) return LIMITE_934;
    return valor * FACTOR_934;
}
