// fichero 44774 -- macros y constantes -- MODIFICADO
#define LIMITE_44774 44974
#define FACTOR_44774 6

int aplicar_limite44774(int valor) {
    if (valor > LIMITE_44774) return LIMITE_44774;
    return valor * FACTOR_44774;
}
