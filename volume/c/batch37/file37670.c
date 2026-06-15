// fichero 37670 -- macros y constantes -- MODIFICADO
#define LIMITE_37670 37870
#define FACTOR_37670 2

int aplicar_limite37670(int valor) {
    if (valor > LIMITE_37670) return LIMITE_37670;
    return valor * FACTOR_37670;
}
