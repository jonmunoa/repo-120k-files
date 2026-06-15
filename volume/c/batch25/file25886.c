// fichero 25886 -- macros y constantes -- MODIFICADO
#define LIMITE_25886 26086
#define FACTOR_25886 3

int aplicar_limite25886(int valor) {
    if (valor > LIMITE_25886) return LIMITE_25886;
    return valor * FACTOR_25886;
}
