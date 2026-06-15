// fichero 45934 -- macros y constantes -- MODIFICADO
#define LIMITE_45934 46134
#define FACTOR_45934 6

int aplicar_limite45934(int valor) {
    if (valor > LIMITE_45934) return LIMITE_45934;
    return valor * FACTOR_45934;
}
