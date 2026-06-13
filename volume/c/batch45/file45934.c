// fichero 45934 -- macros y constantes
#define LIMITE_45934 46034
#define FACTOR_45934 5

int aplicar_limite45934(int valor) {
    if (valor > LIMITE_45934) return LIMITE_45934;
    return valor * FACTOR_45934;
}
