// fichero 7346 -- macros y constantes
#define LIMITE_7346 7446
#define FACTOR_7346 2

int aplicar_limite7346(int valor) {
    if (valor > LIMITE_7346) return LIMITE_7346;
    return valor * FACTOR_7346;
}
