// fichero 13422 -- macros y constantes
#define LIMITE_13422 13522
#define FACTOR_13422 3

int aplicar_limite13422(int valor) {
    if (valor > LIMITE_13422) return LIMITE_13422;
    return valor * FACTOR_13422;
}
