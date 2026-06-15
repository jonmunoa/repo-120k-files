// fichero 41722 -- macros y constantes -- MODIFICADO
#define LIMITE_41722 41922
#define FACTOR_41722 4

int aplicar_limite41722(int valor) {
    if (valor > LIMITE_41722) return LIMITE_41722;
    return valor * FACTOR_41722;
}
