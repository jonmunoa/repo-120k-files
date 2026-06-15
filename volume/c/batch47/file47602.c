// fichero 47602 -- macros y constantes -- MODIFICADO
#define LIMITE_47602 47802
#define FACTOR_47602 4

int aplicar_limite47602(int valor) {
    if (valor > LIMITE_47602) return LIMITE_47602;
    return valor * FACTOR_47602;
}
