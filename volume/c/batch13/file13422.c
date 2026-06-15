// fichero 13422 -- macros y constantes -- MODIFICADO
#define LIMITE_13422 13622
#define FACTOR_13422 4

int aplicar_limite13422(int valor) {
    if (valor > LIMITE_13422) return LIMITE_13422;
    return valor * FACTOR_13422;
}
