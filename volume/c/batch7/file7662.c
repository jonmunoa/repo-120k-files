// fichero 7662 -- macros y constantes -- MODIFICADO
#define LIMITE_7662 7862
#define FACTOR_7662 4

int aplicar_limite7662(int valor) {
    if (valor > LIMITE_7662) return LIMITE_7662;
    return valor * FACTOR_7662;
}
