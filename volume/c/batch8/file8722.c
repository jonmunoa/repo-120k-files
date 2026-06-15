// fichero 8722 -- macros y constantes -- MODIFICADO
#define LIMITE_8722 8922
#define FACTOR_8722 4

int aplicar_limite8722(int valor) {
    if (valor > LIMITE_8722) return LIMITE_8722;
    return valor * FACTOR_8722;
}
