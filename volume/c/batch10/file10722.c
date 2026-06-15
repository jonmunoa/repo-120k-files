// fichero 10722 -- macros y constantes -- MODIFICADO
#define LIMITE_10722 10922
#define FACTOR_10722 4

int aplicar_limite10722(int valor) {
    if (valor > LIMITE_10722) return LIMITE_10722;
    return valor * FACTOR_10722;
}
