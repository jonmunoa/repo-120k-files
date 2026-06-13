// fichero 11190 -- macros y constantes
#define LIMITE_11190 11290
#define FACTOR_11190 1

int aplicar_limite11190(int valor) {
    if (valor > LIMITE_11190) return LIMITE_11190;
    return valor * FACTOR_11190;
}
