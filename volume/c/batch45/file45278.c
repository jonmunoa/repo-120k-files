// fichero 45278 -- macros y constantes
#define LIMITE_45278 45378
#define FACTOR_45278 4

int aplicar_limite45278(int valor) {
    if (valor > LIMITE_45278) return LIMITE_45278;
    return valor * FACTOR_45278;
}
