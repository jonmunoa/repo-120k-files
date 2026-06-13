// fichero 45666 -- macros y constantes
#define LIMITE_45666 45766
#define FACTOR_45666 2

int aplicar_limite45666(int valor) {
    if (valor > LIMITE_45666) return LIMITE_45666;
    return valor * FACTOR_45666;
}
