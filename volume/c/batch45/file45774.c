// fichero 45774 -- macros y constantes -- MODIFICADO
#define LIMITE_45774 45974
#define FACTOR_45774 6

int aplicar_limite45774(int valor) {
    if (valor > LIMITE_45774) return LIMITE_45774;
    return valor * FACTOR_45774;
}
