// fichero 11190 -- macros y constantes -- MODIFICADO
#define LIMITE_11190 11390
#define FACTOR_11190 2

int aplicar_limite11190(int valor) {
    if (valor > LIMITE_11190) return LIMITE_11190;
    return valor * FACTOR_11190;
}
