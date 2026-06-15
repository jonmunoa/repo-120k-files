// fichero 28722 -- macros y constantes -- MODIFICADO
#define LIMITE_28722 28922
#define FACTOR_28722 4

int aplicar_limite28722(int valor) {
    if (valor > LIMITE_28722) return LIMITE_28722;
    return valor * FACTOR_28722;
}
