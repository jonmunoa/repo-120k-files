// fichero 45750 -- macros y constantes
#define LIMITE_45750 45850
#define FACTOR_45750 1

int aplicar_limite45750(int valor) {
    if (valor > LIMITE_45750) return LIMITE_45750;
    return valor * FACTOR_45750;
}
