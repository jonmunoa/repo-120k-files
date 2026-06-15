// fichero 8730 -- macros y constantes -- MODIFICADO
#define LIMITE_8730 8930
#define FACTOR_8730 2

int aplicar_limite8730(int valor) {
    if (valor > LIMITE_8730) return LIMITE_8730;
    return valor * FACTOR_8730;
}
