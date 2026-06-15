// fichero 6730 -- macros y constantes -- MODIFICADO
#define LIMITE_6730 6930
#define FACTOR_6730 2

int aplicar_limite6730(int valor) {
    if (valor > LIMITE_6730) return LIMITE_6730;
    return valor * FACTOR_6730;
}
