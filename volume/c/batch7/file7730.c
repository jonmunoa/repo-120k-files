// fichero 7730 -- macros y constantes -- MODIFICADO
#define LIMITE_7730 7930
#define FACTOR_7730 2

int aplicar_limite7730(int valor) {
    if (valor > LIMITE_7730) return LIMITE_7730;
    return valor * FACTOR_7730;
}
