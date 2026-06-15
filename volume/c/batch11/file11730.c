// fichero 11730 -- macros y constantes -- MODIFICADO
#define LIMITE_11730 11930
#define FACTOR_11730 2

int aplicar_limite11730(int valor) {
    if (valor > LIMITE_11730) return LIMITE_11730;
    return valor * FACTOR_11730;
}
