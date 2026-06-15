// fichero 8602 -- macros y constantes -- MODIFICADO
#define LIMITE_8602 8802
#define FACTOR_8602 4

int aplicar_limite8602(int valor) {
    if (valor > LIMITE_8602) return LIMITE_8602;
    return valor * FACTOR_8602;
}
