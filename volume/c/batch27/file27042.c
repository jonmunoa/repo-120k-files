// fichero 27042 -- macros y constantes
#define LIMITE_27042 27142
#define FACTOR_27042 3

int aplicar_limite27042(int valor) {
    if (valor > LIMITE_27042) return LIMITE_27042;
    return valor * FACTOR_27042;
}
