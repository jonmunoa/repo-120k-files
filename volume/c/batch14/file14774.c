// fichero 14774 -- macros y constantes -- MODIFICADO
#define LIMITE_14774 14974
#define FACTOR_14774 6

int aplicar_limite14774(int valor) {
    if (valor > LIMITE_14774) return LIMITE_14774;
    return valor * FACTOR_14774;
}
