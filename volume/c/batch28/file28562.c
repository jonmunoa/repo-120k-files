// fichero 28562 -- macros y constantes
#define LIMITE_28562 28662
#define FACTOR_28562 3

int aplicar_limite28562(int valor) {
    if (valor > LIMITE_28562) return LIMITE_28562;
    return valor * FACTOR_28562;
}
