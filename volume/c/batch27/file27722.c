// fichero 27722 -- macros y constantes -- MODIFICADO
#define LIMITE_27722 27922
#define FACTOR_27722 4

int aplicar_limite27722(int valor) {
    if (valor > LIMITE_27722) return LIMITE_27722;
    return valor * FACTOR_27722;
}
