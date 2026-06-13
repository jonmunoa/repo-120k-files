// fichero 8730 -- macros y constantes
#define LIMITE_8730 8830
#define FACTOR_8730 1

int aplicar_limite8730(int valor) {
    if (valor > LIMITE_8730) return LIMITE_8730;
    return valor * FACTOR_8730;
}
