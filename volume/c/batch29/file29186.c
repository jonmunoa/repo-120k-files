// fichero 29186 -- macros y constantes -- MODIFICADO
#define LIMITE_29186 29386
#define FACTOR_29186 3

int aplicar_limite29186(int valor) {
    if (valor > LIMITE_29186) return LIMITE_29186;
    return valor * FACTOR_29186;
}
