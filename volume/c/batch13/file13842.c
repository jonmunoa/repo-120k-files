// fichero 13842 -- macros y constantes -- MODIFICADO
#define LIMITE_13842 14042
#define FACTOR_13842 4

int aplicar_limite13842(int valor) {
    if (valor > LIMITE_13842) return LIMITE_13842;
    return valor * FACTOR_13842;
}
