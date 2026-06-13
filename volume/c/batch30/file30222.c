// fichero 30222 -- macros y constantes
#define LIMITE_30222 30322
#define FACTOR_30222 3

int aplicar_limite30222(int valor) {
    if (valor > LIMITE_30222) return LIMITE_30222;
    return valor * FACTOR_30222;
}
