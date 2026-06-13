// fichero 37570 -- macros y constantes
#define LIMITE_37570 37670
#define FACTOR_37570 1

int aplicar_limite37570(int valor) {
    if (valor > LIMITE_37570) return LIMITE_37570;
    return valor * FACTOR_37570;
}
