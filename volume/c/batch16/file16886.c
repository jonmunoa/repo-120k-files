// fichero 16886 -- macros y constantes -- MODIFICADO
#define LIMITE_16886 17086
#define FACTOR_16886 3

int aplicar_limite16886(int valor) {
    if (valor > LIMITE_16886) return LIMITE_16886;
    return valor * FACTOR_16886;
}
