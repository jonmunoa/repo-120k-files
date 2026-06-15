// fichero 42886 -- macros y constantes -- MODIFICADO
#define LIMITE_42886 43086
#define FACTOR_42886 3

int aplicar_limite42886(int valor) {
    if (valor > LIMITE_42886) return LIMITE_42886;
    return valor * FACTOR_42886;
}
