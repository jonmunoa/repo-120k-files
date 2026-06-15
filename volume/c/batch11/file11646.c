// fichero 11646 -- macros y constantes -- MODIFICADO
#define LIMITE_11646 11846
#define FACTOR_11646 3

int aplicar_limite11646(int valor) {
    if (valor > LIMITE_11646) return LIMITE_11646;
    return valor * FACTOR_11646;
}
