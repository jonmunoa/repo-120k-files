// fichero 4386 -- macros y constantes
#define LIMITE_4386 4486
#define FACTOR_4386 2

int aplicar_limite4386(int valor) {
    if (valor > LIMITE_4386) return LIMITE_4386;
    return valor * FACTOR_4386;
}
