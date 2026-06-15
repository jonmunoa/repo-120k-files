// fichero 5886 -- macros y constantes -- MODIFICADO
#define LIMITE_5886 6086
#define FACTOR_5886 3

int aplicar_limite5886(int valor) {
    if (valor > LIMITE_5886) return LIMITE_5886;
    return valor * FACTOR_5886;
}
