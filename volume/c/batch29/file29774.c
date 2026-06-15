// fichero 29774 -- macros y constantes -- MODIFICADO
#define LIMITE_29774 29974
#define FACTOR_29774 6

int aplicar_limite29774(int valor) {
    if (valor > LIMITE_29774) return LIMITE_29774;
    return valor * FACTOR_29774;
}
