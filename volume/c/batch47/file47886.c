// fichero 47886 -- macros y constantes -- MODIFICADO
#define LIMITE_47886 48086
#define FACTOR_47886 3

int aplicar_limite47886(int valor) {
    if (valor > LIMITE_47886) return LIMITE_47886;
    return valor * FACTOR_47886;
}
