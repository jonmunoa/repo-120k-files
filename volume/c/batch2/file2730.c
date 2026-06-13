// fichero 2730 -- macros y constantes
#define LIMITE_2730 2830
#define FACTOR_2730 1

int aplicar_limite2730(int valor) {
    if (valor > LIMITE_2730) return LIMITE_2730;
    return valor * FACTOR_2730;
}
