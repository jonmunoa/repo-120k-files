// fichero 37470 -- macros y constantes -- MODIFICADO
#define LIMITE_37470 37670
#define FACTOR_37470 2

int aplicar_limite37470(int valor) {
    if (valor > LIMITE_37470) return LIMITE_37470;
    return valor * FACTOR_37470;
}
