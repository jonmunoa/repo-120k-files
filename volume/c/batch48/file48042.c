// fichero 48042 -- macros y constantes
#define LIMITE_48042 48142
#define FACTOR_48042 3

int aplicar_limite48042(int valor) {
    if (valor > LIMITE_48042) return LIMITE_48042;
    return valor * FACTOR_48042;
}
