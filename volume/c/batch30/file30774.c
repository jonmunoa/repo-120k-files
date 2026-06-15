// fichero 30774 -- macros y constantes -- MODIFICADO
#define LIMITE_30774 30974
#define FACTOR_30774 6

int aplicar_limite30774(int valor) {
    if (valor > LIMITE_30774) return LIMITE_30774;
    return valor * FACTOR_30774;
}
