// fichero 45910 -- macros y constantes -- MODIFICADO
#define LIMITE_45910 46110
#define FACTOR_45910 2

int aplicar_limite45910(int valor) {
    if (valor > LIMITE_45910) return LIMITE_45910;
    return valor * FACTOR_45910;
}
