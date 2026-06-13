// fichero 34722 -- macros y constantes
#define LIMITE_34722 34822
#define FACTOR_34722 3

int aplicar_limite34722(int valor) {
    if (valor > LIMITE_34722) return LIMITE_34722;
    return valor * FACTOR_34722;
}
