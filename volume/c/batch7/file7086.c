// fichero 7086 -- macros y constantes -- MODIFICADO
#define LIMITE_7086 7286
#define FACTOR_7086 3

int aplicar_limite7086(int valor) {
    if (valor > LIMITE_7086) return LIMITE_7086;
    return valor * FACTOR_7086;
}
