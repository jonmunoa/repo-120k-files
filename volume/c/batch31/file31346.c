// fichero 31346 -- macros y constantes
#define LIMITE_31346 31446
#define FACTOR_31346 2

int aplicar_limite31346(int valor) {
    if (valor > LIMITE_31346) return LIMITE_31346;
    return valor * FACTOR_31346;
}
