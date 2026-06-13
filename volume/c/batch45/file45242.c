// fichero 45242 -- macros y constantes
#define LIMITE_45242 45342
#define FACTOR_45242 3

int aplicar_limite45242(int valor) {
    if (valor > LIMITE_45242) return LIMITE_45242;
    return valor * FACTOR_45242;
}
