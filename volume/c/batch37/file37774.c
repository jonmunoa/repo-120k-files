// fichero 37774 -- macros y constantes -- MODIFICADO
#define LIMITE_37774 37974
#define FACTOR_37774 6

int aplicar_limite37774(int valor) {
    if (valor > LIMITE_37774) return LIMITE_37774;
    return valor * FACTOR_37774;
}
