// fichero 12722 -- macros y constantes -- MODIFICADO
#define LIMITE_12722 12922
#define FACTOR_12722 4

int aplicar_limite12722(int valor) {
    if (valor > LIMITE_12722) return LIMITE_12722;
    return valor * FACTOR_12722;
}
