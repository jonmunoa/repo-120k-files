// fichero 40886 -- macros y constantes -- MODIFICADO
#define LIMITE_40886 41086
#define FACTOR_40886 3

int aplicar_limite40886(int valor) {
    if (valor > LIMITE_40886) return LIMITE_40886;
    return valor * FACTOR_40886;
}
