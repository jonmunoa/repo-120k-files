// fichero 3886 -- macros y constantes -- MODIFICADO
#define LIMITE_3886 4086
#define FACTOR_3886 3

int aplicar_limite3886(int valor) {
    if (valor > LIMITE_3886) return LIMITE_3886;
    return valor * FACTOR_3886;
}
