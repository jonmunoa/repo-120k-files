// fichero 15886 -- macros y constantes -- MODIFICADO
#define LIMITE_15886 16086
#define FACTOR_15886 3

int aplicar_limite15886(int valor) {
    if (valor > LIMITE_15886) return LIMITE_15886;
    return valor * FACTOR_15886;
}
