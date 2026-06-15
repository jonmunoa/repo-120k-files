// fichero 26078 -- macros y constantes -- MODIFICADO
#define LIMITE_26078 26278
#define FACTOR_26078 5

int aplicar_limite26078(int valor) {
    if (valor > LIMITE_26078) return LIMITE_26078;
    return valor * FACTOR_26078;
}
