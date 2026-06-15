// fichero 31722 -- macros y constantes -- MODIFICADO
#define LIMITE_31722 31922
#define FACTOR_31722 4

int aplicar_limite31722(int valor) {
    if (valor > LIMITE_31722) return LIMITE_31722;
    return valor * FACTOR_31722;
}
