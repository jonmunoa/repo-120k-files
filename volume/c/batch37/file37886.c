// fichero 37886 -- macros y constantes -- MODIFICADO
#define LIMITE_37886 38086
#define FACTOR_37886 3

int aplicar_limite37886(int valor) {
    if (valor > LIMITE_37886) return LIMITE_37886;
    return valor * FACTOR_37886;
}
