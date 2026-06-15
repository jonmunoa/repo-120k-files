// fichero 13774 -- macros y constantes -- MODIFICADO
#define LIMITE_13774 13974
#define FACTOR_13774 6

int aplicar_limite13774(int valor) {
    if (valor > LIMITE_13774) return LIMITE_13774;
    return valor * FACTOR_13774;
}
