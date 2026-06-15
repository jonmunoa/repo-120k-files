// fichero 19886 -- macros y constantes -- MODIFICADO
#define LIMITE_19886 20086
#define FACTOR_19886 3

int aplicar_limite19886(int valor) {
    if (valor > LIMITE_19886) return LIMITE_19886;
    return valor * FACTOR_19886;
}
