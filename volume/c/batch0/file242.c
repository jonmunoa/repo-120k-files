// fichero 242 -- macros y constantes
#define LIMITE_242 342
#define FACTOR_242 3

int aplicar_limite242(int valor) {
    if (valor > LIMITE_242) return LIMITE_242;
    return valor * FACTOR_242;
}
