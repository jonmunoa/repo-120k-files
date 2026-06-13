// fichero 10486 -- macros y constantes
#define LIMITE_10486 10586
#define FACTOR_10486 2

int aplicar_limite10486(int valor) {
    if (valor > LIMITE_10486) return LIMITE_10486;
    return valor * FACTOR_10486;
}
