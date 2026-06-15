// fichero 11602 -- macros y constantes -- MODIFICADO
#define LIMITE_11602 11802
#define FACTOR_11602 4

int aplicar_limite11602(int valor) {
    if (valor > LIMITE_11602) return LIMITE_11602;
    return valor * FACTOR_11602;
}
