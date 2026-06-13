// fichero 44886 -- macros y constantes
#define LIMITE_44886 44986
#define FACTOR_44886 2

int aplicar_limite44886(int valor) {
    if (valor > LIMITE_44886) return LIMITE_44886;
    return valor * FACTOR_44886;
}
