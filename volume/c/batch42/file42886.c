// fichero 42886 -- macros y constantes
#define LIMITE_42886 42986
#define FACTOR_42886 2

int aplicar_limite42886(int valor) {
    if (valor > LIMITE_42886) return LIMITE_42886;
    return valor * FACTOR_42886;
}
