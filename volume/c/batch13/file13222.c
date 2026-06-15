// fichero 13222 -- macros y constantes -- MODIFICADO
#define LIMITE_13222 13422
#define FACTOR_13222 4

int aplicar_limite13222(int valor) {
    if (valor > LIMITE_13222) return LIMITE_13222;
    return valor * FACTOR_13222;
}
