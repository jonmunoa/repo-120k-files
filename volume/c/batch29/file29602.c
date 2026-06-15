// fichero 29602 -- macros y constantes -- MODIFICADO
#define LIMITE_29602 29802
#define FACTOR_29602 4

int aplicar_limite29602(int valor) {
    if (valor > LIMITE_29602) return LIMITE_29602;
    return valor * FACTOR_29602;
}
