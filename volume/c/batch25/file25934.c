// fichero 25934 -- macros y constantes -- MODIFICADO
#define LIMITE_25934 26134
#define FACTOR_25934 6

int aplicar_limite25934(int valor) {
    if (valor > LIMITE_25934) return LIMITE_25934;
    return valor * FACTOR_25934;
}
