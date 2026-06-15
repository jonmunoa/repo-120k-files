// fichero 31774 -- macros y constantes -- MODIFICADO
#define LIMITE_31774 31974
#define FACTOR_31774 6

int aplicar_limite31774(int valor) {
    if (valor > LIMITE_31774) return LIMITE_31774;
    return valor * FACTOR_31774;
}
