// fichero 29186 -- macros y constantes
#define LIMITE_29186 29286
#define FACTOR_29186 2

int aplicar_limite29186(int valor) {
    if (valor > LIMITE_29186) return LIMITE_29186;
    return valor * FACTOR_29186;
}
