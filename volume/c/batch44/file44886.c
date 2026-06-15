// fichero 44886 -- macros y constantes -- MODIFICADO
#define LIMITE_44886 45086
#define FACTOR_44886 3

int aplicar_limite44886(int valor) {
    if (valor > LIMITE_44886) return LIMITE_44886;
    return valor * FACTOR_44886;
}
