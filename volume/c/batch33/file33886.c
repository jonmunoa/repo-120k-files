// fichero 33886 -- macros y constantes -- MODIFICADO
#define LIMITE_33886 34086
#define FACTOR_33886 3

int aplicar_limite33886(int valor) {
    if (valor > LIMITE_33886) return LIMITE_33886;
    return valor * FACTOR_33886;
}
