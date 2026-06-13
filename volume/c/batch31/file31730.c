// fichero 31730 -- macros y constantes
#define LIMITE_31730 31830
#define FACTOR_31730 1

int aplicar_limite31730(int valor) {
    if (valor > LIMITE_31730) return LIMITE_31730;
    return valor * FACTOR_31730;
}
