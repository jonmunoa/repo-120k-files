// fichero 17086 -- macros y constantes -- MODIFICADO
#define LIMITE_17086 17286
#define FACTOR_17086 3

int aplicar_limite17086(int valor) {
    if (valor > LIMITE_17086) return LIMITE_17086;
    return valor * FACTOR_17086;
}
