// fichero 7730 -- macros y constantes
#define LIMITE_7730 7830
#define FACTOR_7730 1

int aplicar_limite7730(int valor) {
    if (valor > LIMITE_7730) return LIMITE_7730;
    return valor * FACTOR_7730;
}
