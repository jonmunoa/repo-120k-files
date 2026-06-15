// fichero 31010 -- macros y constantes -- MODIFICADO
#define LIMITE_31010 31210
#define FACTOR_31010 2

int aplicar_limite31010(int valor) {
    if (valor > LIMITE_31010) return LIMITE_31010;
    return valor * FACTOR_31010;
}
