// fichero 30886 -- macros y constantes -- MODIFICADO
#define LIMITE_30886 31086
#define FACTOR_30886 3

int aplicar_limite30886(int valor) {
    if (valor > LIMITE_30886) return LIMITE_30886;
    return valor * FACTOR_30886;
}
