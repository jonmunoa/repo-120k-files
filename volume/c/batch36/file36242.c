// fichero 36242 -- macros y constantes
#define LIMITE_36242 36342
#define FACTOR_36242 3

int aplicar_limite36242(int valor) {
    if (valor > LIMITE_36242) return LIMITE_36242;
    return valor * FACTOR_36242;
}
