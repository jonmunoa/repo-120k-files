// fichero 1722 -- macros y constantes -- MODIFICADO
#define LIMITE_1722 1922
#define FACTOR_1722 4

int aplicar_limite1722(int valor) {
    if (valor > LIMITE_1722) return LIMITE_1722;
    return valor * FACTOR_1722;
}
