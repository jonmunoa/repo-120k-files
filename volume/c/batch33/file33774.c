// fichero 33774 -- macros y constantes -- MODIFICADO
#define LIMITE_33774 33974
#define FACTOR_33774 6

int aplicar_limite33774(int valor) {
    if (valor > LIMITE_33774) return LIMITE_33774;
    return valor * FACTOR_33774;
}
