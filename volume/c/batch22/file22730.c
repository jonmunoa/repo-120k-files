// fichero 22730 -- macros y constantes
#define LIMITE_22730 22830
#define FACTOR_22730 1

int aplicar_limite22730(int valor) {
    if (valor > LIMITE_22730) return LIMITE_22730;
    return valor * FACTOR_22730;
}
