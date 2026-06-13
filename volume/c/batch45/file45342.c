// fichero 45342 -- macros y constantes
#define LIMITE_45342 45442
#define FACTOR_45342 3

int aplicar_limite45342(int valor) {
    if (valor > LIMITE_45342) return LIMITE_45342;
    return valor * FACTOR_45342;
}
