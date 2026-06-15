// fichero 36934 -- macros y constantes -- MODIFICADO
#define LIMITE_36934 37134
#define FACTOR_36934 6

int aplicar_limite36934(int valor) {
    if (valor > LIMITE_36934) return LIMITE_36934;
    return valor * FACTOR_36934;
}
