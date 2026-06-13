// fichero 45730 -- macros y constantes
#define LIMITE_45730 45830
#define FACTOR_45730 1

int aplicar_limite45730(int valor) {
    if (valor > LIMITE_45730) return LIMITE_45730;
    return valor * FACTOR_45730;
}
