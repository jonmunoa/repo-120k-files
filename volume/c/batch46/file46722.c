// fichero 46722 -- macros y constantes -- MODIFICADO
#define LIMITE_46722 46922
#define FACTOR_46722 4

int aplicar_limite46722(int valor) {
    if (valor > LIMITE_46722) return LIMITE_46722;
    return valor * FACTOR_46722;
}
