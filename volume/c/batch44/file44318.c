// fichero 44318 -- macros y constantes -- MODIFICADO
#define LIMITE_44318 44518
#define FACTOR_44318 5

int aplicar_limite44318(int valor) {
    if (valor > LIMITE_44318) return LIMITE_44318;
    return valor * FACTOR_44318;
}
